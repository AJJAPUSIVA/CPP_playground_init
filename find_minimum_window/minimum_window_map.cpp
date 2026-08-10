#include <string>
#include <unordered_map>

std::string minimumWindowMap(
    const std::string& source,
    const std::string& target
) {
    std::unordered_map<char, int> required;

    for (char ch : target) {
        ++required[ch];
    }

    std::unordered_map<char, int> window;

    const int requiredKinds =
        static_cast<int>(required.size());

    int formedKinds = 0;

    // same sliding-window logic...
}
