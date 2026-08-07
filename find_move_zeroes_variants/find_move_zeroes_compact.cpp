#include <vector>

void moveZeroes(std::vector<int>& nums) {
    std::size_t write = 0;

    for (std::size_t read = 0;
         read < nums.size();
         ++read) {

        if (nums[read] != 0) {
            nums[write++] = nums[read];
        }
    }

    while (write < nums.size()) {
        nums[write++] = 0;
    }
}
