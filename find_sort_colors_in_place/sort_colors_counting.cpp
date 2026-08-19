#include <array>
#include <cstddef>
#include <vector>

void sortColors(std::vector<int>& nums) {
    std::array<std::size_t, 3> count{};

    for (const int value : nums) {
        ++count[static_cast<std::size_t>(value)];
    }

    std::size_t writeIndex = 0;

    for (std::size_t color = 0; color < 3; ++color) {
        for (std::size_t i = 0;
             i < count[color];
             ++i) {

            nums[writeIndex] =
                static_cast<int>(color);
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
