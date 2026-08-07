#include <vector>

std::vector<long long>
productExceptSelf(const std::vector<int>& nums) {
    const std::size_t n = nums.size();

    std::vector<long long> result(n, 1);

    long long prefixProduct = 1;

    // First pass:
    // result[i] becomes product of everything before i.
    for (std::size_t i = 0; i < n; ++i) {
        result[i] = prefixProduct;
        prefixProduct *= nums[i];
    }

    long long suffixProduct = 1;

    // Second pass:
    // Multiply by product of everything after i.
    for (std::size_t i = n; i-- > 0;) {
        result[i] *= suffixProduct;
        suffixProduct *= nums[i];
    }

    return result;
}
