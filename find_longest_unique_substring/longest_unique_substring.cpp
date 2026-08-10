#include <algorithm>
#include <array>
#include <string>

std::size_t longestUniqueSubstring(
    const std::string& text
) {
    std::array<std::ptrdiff_t, 256> lastSeen;
    lastSeen.fill(-1);

    std::size_t left = 0;
    std::size_t bestLength = 0;

    for (std::size_t right = 0;
         right < text.size();
         ++right) {

        const unsigned char ch =
            static_cast<unsigned char>(text[right]);

        const std::ptrdiff_t previous =
            lastSeen[ch];

        if (previous >=
            static_cast<std::ptrdiff_t>(left)) {

            left =
                static_cast<std::size_t>(previous + 1);
        }

        lastSeen[ch] =
            static_cast<std::ptrdiff_t>(right);

        bestLength = std::max(
            bestLength,
            right - left + 1
        );
    }

    return bestLength;
}
