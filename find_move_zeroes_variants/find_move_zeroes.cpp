#include <vector>

void moveZeroes(std::vector<int>& nums) {
    std::size_t writeIndex = 0;

    // Move all non-zero values to the front.
    for (std::size_t readIndex = 0;
         readIndex < nums.size();
         ++readIndex) {

        if (nums[readIndex] != 0) {
            nums[writeIndex] = nums[readIndex];
            ++writeIndex;
        }
    }

    // Fill the remaining positions with zeroes.
    while (writeIndex < nums.size()) {
        nums[writeIndex] = 0;
        ++writeIndex;
    }
}
