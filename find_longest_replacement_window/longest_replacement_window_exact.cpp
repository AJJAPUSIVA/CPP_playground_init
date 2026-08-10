#include <algorithm>
#include <array>
#include <string>

std::size_t longestReplacementWindowExact(
    const std::string& text,
    std::size_t k
) {
    std::array<std::size_t, 26> frequency{};

    std::size_t left = 0;
    std::size_t best = 0;

    for (std::size_t right = 0;
         right < text.size();
         ++right) {

        ++frequency[text[right] - 'A'];

        while (true) {
            const auto maxIt =
                std::max_element(
                    frequency.begin(),
                    frequency.end()
                );

            const std::size_t maxFrequency =
                *maxIt;

            const std::size_t windowLength =
                right - left + 1;

            if (windowLength - maxFrequency <= k) {
                break;
            }

            --frequency[text[left] - 'A'];
            ++left;
        }

        best = std::max(
            best,
            right - left + 1
        );
    }

    return best;
}
