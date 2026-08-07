#include <cstddef>
#include <vector>

std::vector<long long>
productExceptSelfReadable(const std::vector<int>& values) {
    const std::size_t n = values.size();

    std::vector<long long> prefix(n, 1);
    std::vector<long long> suffix(n, 1);
    std::vector<long long> result(n, 1);

    for (std::size_t i = 1; i < n; ++i) {
        prefix[i] =
            prefix[i - 1] * values[i - 1];
    }

    if (n > 0) {
        for (std::size_t i = n - 1; i > 0; --i) {
            suffix[i - 1] =
                suffix[i] * values[i];
        }
    }

    for (std::size_t i = 0; i < n; ++i) {
        result[i] = prefix[i] * suffix[i];
    }

    return result;
}
