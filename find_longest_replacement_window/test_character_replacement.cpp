#include <cassert>

#include "longest_replacement_window.cpp"

void testCharacterReplacement() {
    assert(
        longestReplacementWindow(
            "ABAB",
            2
        ) == 4
    );

    assert(
        longestReplacementWindow(
            "AABABBA",
            1
        ) == 4
    );

    assert(
        longestReplacementWindow(
            "AAAA",
            0
        ) == 4
    );

    assert(
        longestReplacementWindow(
            "ABCDE",
            1
        ) == 2
    );

    assert(
        longestReplacementWindow(
            "",
            3
        ) == 0
    );

    assert(
        longestReplacementWindow(
            "A",
            0
        ) == 1
    );

    assert(
        longestReplacementWindow(
            "ABBB",
            2
        ) == 4
    );
}

int main() {
    testCharacterReplacement();
    return 0;
}
