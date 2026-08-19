#include <cstddef>
#include <utility>
#include <vector>

void sortColors(std::vector<int>& nums) {
    std::size_t nextZero = 0;
    std::size_t current = 0;
    std::size_t nextTwo = nums.size();

    while (current < nextTwo) {
        if (nums[current] == 0) {
            std::swap(nums[nextZero], nums[current]);
            ++nextZero;
            ++current;
        } else if (nums[current] == 2) {
            --nextTwo;
            std::swap(nums[current], nums[nextTwo]);
        } else {
            ++current;
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
