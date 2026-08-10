#include <cassert>
#include <string>

#include "longest_unique_substring.cpp"

void testLongestUniqueSubstring() {
    assert(
        longestUniqueSubstring("abcabcbb") == 3
    );

    assert(
        longestUniqueSubstring("bbbbb") == 1
    );

    assert(
        longestUniqueSubstring("pwwkew") == 3
    );

    assert(
        longestUniqueSubstring("") == 0
    );

    assert(
        longestUniqueSubstring("a") == 1
    );

    assert(
        longestUniqueSubstring("abcdef") == 6
    );

    assert(
        longestUniqueSubstring("abba") == 2
    );

    assert(
        longestUniqueSubstring("dvdf") == 3
    );
}

int main() {
    testLongestUniqueSubstring();
    return 0;
}
