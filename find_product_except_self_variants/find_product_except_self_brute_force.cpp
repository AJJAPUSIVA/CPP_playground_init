#include <vector>

std::vector<long long>
productExceptSelfBruteForce(const std::vector<int>& nums) {
    const std::size_t n = nums.size();

    std::vector<long long> result(n, 1);

    for (std::size_t i = 0; i < n; ++i) {
        for (std::size_t j = 0; j < n; ++j) {
            if (i != j) {
                result[i] *= nums[j];
            }
        }
    }

    return result;
}
