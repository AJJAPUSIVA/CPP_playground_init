#include <cassert>
#include <string>

#include "minimum_window.cpp"

void testMinimumWindow() {
    assert(
        minimumWindow(
            "ADOBECODEBANC",
            "ABC"
        ) == "BANC"
    );

    assert(
        minimumWindow(
            "a",
            "a"
        ) == "a"
    );

    assert(
        minimumWindow(
            "a",
            "aa"
        ).empty()
    );

    assert(
        minimumWindow(
            "AAABBC",
            "AABC"
        ) == "AABBC"
    );

    assert(
        minimumWindow(
            "ABC",
            "XYZ"
        ).empty()
    );

    assert(
        minimumWindow(
            "",
            "A"
        ).empty()
    );

    assert(
        minimumWindow(
            "ABC",
            ""
        ).empty()
    );
}

int main() {
    testMinimumWindow();
    return 0;
}
