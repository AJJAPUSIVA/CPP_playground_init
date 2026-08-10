#include <algorithm>
#include <string>
#include <unordered_map>

std::size_t longestUniqueSubstringMap(
    const std::string& text
) {
    std::unordered_map<char, std::size_t> lastSeen;

    std::size_t left = 0;
    std::size_t best = 0;

    for (std::size_t right = 0;
         right < text.size();
         ++right) {

        const char ch = text[right];

        if (const auto it = lastSeen.find(ch);
            it != lastSeen.end() &&
            it->second >= left) {

            left = it->second + 1;
        }

        lastSeen[ch] = right;

        best = std::max(
            best,
            right - left + 1
        );
    }

    return best;
}
