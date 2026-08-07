#include <vector>

std::vector<int> moveZeroesExtraSpace(
    const std::vector<int>& nums
) {
    std::vector<int> result;
    result.reserve(nums.size());

    std::size_t zeroCount = 0;

    for (int value : nums) {
        if (value == 0) {
            ++zeroCount;
        } else {
            result.push_back(value);
        }
    }

    result.insert(result.end(), zeroCount, 0);

    return result;
}
