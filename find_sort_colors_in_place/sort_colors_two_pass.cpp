#include <cstddef>
#include <utility>
#include <vector>

void sortColors(std::vector<int>& nums) {
    // First pass: move all 0s to the front.
    std::size_t writeIndex = 0;

    for (std::size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            std::swap(nums[writeIndex], nums[i]);
            ++writeIndex;
        }
    }

    // Second pass: move all 1s after the 0s.
    // 2s naturally end up at the end.
    for (std::size_t i = writeIndex;
         i < nums.size();
         ++i) {

        if (nums[i] == 1) {
            std::swap(nums[writeIndex], nums[i]);
            ++writeIndex;
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
