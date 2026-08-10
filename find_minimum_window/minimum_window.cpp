#include <array>
#include <limits>
#include <string>

std::string minimumWindow(
    const std::string& source,
    const std::string& target
) {
    if (target.empty() ||
        source.empty() ||
        target.size() > source.size()) {
        return "";
    }

    std::array<int, 256> required{};
    std::array<int, 256> window{};

    int requiredKinds = 0;

    for (unsigned char ch : target) {
        if (required[ch] == 0) {
            ++requiredKinds;
        }

        ++required[ch];
    }

    int formedKinds = 0;

    std::size_t left = 0;
    std::size_t bestStart = 0;
    std::size_t bestLength =
        std::numeric_limits<std::size_t>::max();

    for (std::size_t right = 0;
         right < source.size();
         ++right) {

        const unsigned char rightChar =
            static_cast<unsigned char>(source[right]);

        ++window[rightChar];

        if (required[rightChar] > 0 &&
            window[rightChar] == required[rightChar]) {

            ++formedKinds;
        }

        while (formedKinds == requiredKinds) {
            const std::size_t currentLength =
                right - left + 1;

            if (currentLength < bestLength) {
                bestLength = currentLength;
                bestStart = left;
            }

            const unsigned char leftChar =
                static_cast<unsigned char>(source[left]);

            --window[leftChar];

            if (required[leftChar] > 0 &&
                window[leftChar] < required[leftChar]) {

                --formedKinds;
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
