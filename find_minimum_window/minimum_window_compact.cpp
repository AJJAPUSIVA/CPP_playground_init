#include <array>
#include <limits>
#include <string>

std::string minimumWindowCompact(
    const std::string& source,
    const std::string& target
) {
    if (target.empty() ||
        source.empty() ||
        target.size() > source.size()) {
        return "";
    }

    std::array<int, 256> need{};

    for (unsigned char ch : target) {
        ++need[ch];
    }

    std::size_t missing = target.size();

    std::size_t left = 0;
    std::size_t bestStart = 0;
    std::size_t bestLength =
        std::numeric_limits<std::size_t>::max();

    for (std::size_t right = 0;
         right < source.size();
         ++right) {

        const unsigned char rightChar =
            static_cast<unsigned char>(source[right]);

        if (need[rightChar] > 0) {
            --missing;
        }

        --need[rightChar];

        while (missing == 0) {
            const std::size_t length =
                right - left + 1;

            if (length < bestLength) {
                bestLength = length;
                bestStart = left;
            }

            const unsigned char leftChar =
                static_cast<unsigned char>(source[left]);

            ++need[leftChar];

            if (need[leftChar] > 0) {
                ++missing;
            }

            ++left;
        }
    }

    if (bestLength ==
        std::numeric_limits<std::size_t>::max()) {
        return "";
    }

    return source.substr(bestStart, bestLength);
}
