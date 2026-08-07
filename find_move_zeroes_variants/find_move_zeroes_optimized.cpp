#include <utility>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    std::size_t nextNonZero = 0;

    for (std::size_t current = 0;
         current < nums.size();
         ++current) {

        if (nums[current] == 0) {
            continue;
        }

        if (current != nextNonZero) {
            std::swap(
                nums[current],
                nums[nextNonZero]
            );
        }

        ++nextNonZero;
    }
}
