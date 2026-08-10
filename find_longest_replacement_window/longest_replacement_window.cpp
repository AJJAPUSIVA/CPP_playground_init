#include <algorithm>
#include <array>
#include <string>

std::size_t longestReplacementWindow(
    const std::string& text,
    std::size_t k
) {
    std::array<std::size_t, 26> frequency{};

    std::size_t left = 0;
    std::size_t maxFrequency = 0;
    std::size_t bestLength = 0;

    for (std::size_t right = 0;
         right < text.size();
         ++right) {

        const std::size_t index =
            static_cast<std::size_t>(text[right] - 'A');

        ++frequency[index];

        maxFrequency = std::max(
            maxFrequency,
            frequency[index]
        );

        while (
            (right - left + 1) - maxFrequency > k
        ) {
            const std::size_t leftIndex =
                static_cast<std::size_t>(
                    text[left] - 'A'
                );

            --frequency[leftIndex];
            ++left;
        }

        bestLength = std::max(
            bestLength,
            right - left + 1
        );
    }

    return bestLength;
}
