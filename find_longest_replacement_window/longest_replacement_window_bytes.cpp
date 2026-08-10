#include <algorithm>
#include <array>
#include <string>

std::size_t longestReplacementWindowBytes(
    const std::string& text,
    std::size_t k
) {
    std::array<std::size_t, 256> frequency{};

    std::size_t left = 0;
    std::size_t maxFrequency = 0;
    std::size_t best = 0;

    for (std::size_t right = 0;
         right < text.size();
         ++right) {

        const unsigned char rightChar =
            static_cast<unsigned char>(text[right]);

        ++frequency[rightChar];

        maxFrequency = std::max(
            maxFrequency,
            frequency[rightChar]
        );

        while (
            (right - left + 1) - maxFrequency > k
        ) {
            const unsigned char leftChar =
                static_cast<unsigned char>(text[left]);

            --frequency[leftChar];
            ++left;
        }

        best = std::max(
            best,
            right - left + 1
        );
    }

    return best;
}
