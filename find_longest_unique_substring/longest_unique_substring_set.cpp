#include <algorithm>
#include <string>
#include <unordered_set>

std::size_t longestUniqueSubstringSet(
    const std::string& text
) {
    std::unordered_set<char> window;

    std::size_t left = 0;
    std::size_t best = 0;

    for (std::size_t right = 0;
         right < text.size();
         ++right) {

        while (window.contains(text[right])) {
            window.erase(text[left]);
            ++left;
        }

        window.insert(text[right]);

        best = std::max(
            best,
            right - left + 1
        );
    }

    return best;
}
