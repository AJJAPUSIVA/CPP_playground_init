#include <limits>
#include <optional>

std::optional<long long>
checkedMultiply(long long a, long long b) {
    if (a == 0 || b == 0) {
        return 0;
    }

    if (a == -1 &&
        b == std::numeric_limits<long long>::min()) {
        return std::nullopt;
    }

    if (b == -1 &&
        a == std::numeric_limits<long long>::min()) {
        return std::nullopt;
    }

    if (a > 0) {
        if (b > 0 &&
            a > std::numeric_limits<long long>::max() / b) {
            return std::nullopt;
        }

        if (b < 0 &&
            b < std::numeric_limits<long long>::min() / a) {
            return std::nullopt;
        }
    }
    else {
        if (b > 0 &&
            a < std::numeric_limits<long long>::min() / b) {
            return std::nullopt;
        }

        if (b < 0 &&
            a < std::numeric_limits<long long>::max() / b) {
            return std::nullopt;
        }
    }

    return a * b;
}
