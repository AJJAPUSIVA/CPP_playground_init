#include <vector>

std::vector<long long>
productExceptSelf(const std::vector<int>& nums) {
    const std::size_t n = nums.size();

    std::vector<long long> prefix(n, 1);
    std::vector<long long> suffix(n, 1);
    std::vector<long long> result(n, 1);

    // Build prefix products.
    for (std::size_t i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Build suffix products.
    for (std::size_t i = n; i-- > 1;) {
        suffix[i - 1] = suffix[i] * nums[i];
    }

    // Combine them.
    for (std::size_t i = 0; i < n; ++i) {
        result[i] = prefix[i] * suffix[i];
    }

    return result;
}
