#include <cstddef>
#include <vector>

void sortColors(std::vector<int>& nums) {
    // Three write pointers that track where the
    // next 0, 1, or 2 should be placed.
    // Writing a 0 pushes 1s and 2s forward.
    // Writing a 1 pushes 2s forward.

    std::size_t zeroEnd = 0;
    std::size_t oneEnd = 0;
    std::size_t twoEnd = 0;

    for (std::size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            nums[twoEnd] = 2;
            ++twoEnd;
            nums[oneEnd] = 1;
            ++oneEnd;
            nums[zeroEnd] = 0;
            ++zeroEnd;
        } else if (nums[i] == 1) {
            nums[twoEnd] = 2;
            ++twoEnd;
            nums[oneEnd] = 1;
            ++oneEnd;
        } else {
            nums[twoEnd] = 2;
            ++twoEnd;
        }
    }
}

#include <iostream>

int main() {
    std::vector<int> nums{2, 0, 2, 1, 1, 0};

    sortColors(nums);

    for (const int value : nums) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
