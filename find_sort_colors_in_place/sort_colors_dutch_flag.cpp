#include <cstddef>
#include <utility>
#include <vector>

void sortColors(std::vector<int>& nums) {
    if (nums.empty()) {
        return;
    }

    // Three pointers partition the array into:
    //   [0, low)        → all 0s
    //   [low, mid)      → all 1s
    //   [mid, high]     → unprocessed
    //   (high, end)     → all 2s

    std::size_t low = 0;
    std::size_t mid = 0;
    std::size_t high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            std::swap(nums[low], nums[mid]);
            ++low;
            ++mid;
        } else if (nums[mid] == 1) {
            ++mid;
        } else {
            std::swap(nums[mid], nums[high]);
            // Do not advance mid — the swapped
            // element from high is unprocessed.
            if (high == 0) {
                break;
            }
            --high;
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
