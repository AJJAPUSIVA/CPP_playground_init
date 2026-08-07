#include <cstddef>
#include <vector>

std::vector<long long>
productExceptSelf(const std::vector<int>& values) {
    const std::size_t n = values.size();

    std::vector<long long> result(n, 1);

    long long prefixProduct = 1;

    for (std::size_t index = 0; index < n; ++index) {
        result[index] = prefixProduct;
        prefixProduct *= values[index];
    }

    long long suffixProduct = 1;

    for (std::size_t index = n; index-- > 0;) {
        result[index] *= suffixProduct;
        suffixProduct *= values[index];
    }

    return result;
}
