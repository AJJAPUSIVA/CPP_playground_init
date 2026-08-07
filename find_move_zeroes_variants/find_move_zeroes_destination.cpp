#include <utility>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    std::size_t destination = 0;

    for (std::size_t current = 0;
         current < nums.size();
         ++current) {

        if (nums[current] == 0) {
            continue;
        }

        if (current != destination) {
            std::swap(
                nums[current],
                nums[destination]
            );
        }

        ++destination;
    }
}
