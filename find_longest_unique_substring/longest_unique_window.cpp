#include <algorithm>
#include <array>
#include <string>

struct UniqueWindowResult {
    std::size_t start;
    std::size_t length;
};

UniqueWindowResult longestUniqueWindow(
    const std::string& text
) {
    std::array<std::ptrdiff_t, 256> lastSeen;
    lastSeen.fill(-1);

    std::size_t left = 0;

    UniqueWindowResult best{
        0,
        0
    };

    for (std::size_t right = 0;
         right < text.size();
         ++right) {

        const auto ch =
            static_cast<unsigned char>(text[right]);

        const auto previous = lastSeen[ch];

        if (previous >=
            static_cast<std::ptrdiff_t>(left)) {

            left =
                static_cast<std::size_t>(previous + 1);
        }

        lastSeen[ch] =
            static_cast<std::ptrdiff_t>(right);

        const std::size_t length =
            right - left + 1;

        if (length > best.length) {
            best = {
                left,
                length
            };
        }
    }

    return best;
}
