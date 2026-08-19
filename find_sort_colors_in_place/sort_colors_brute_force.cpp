#include <algorithm>
#include <vector>

void sortColors(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
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
