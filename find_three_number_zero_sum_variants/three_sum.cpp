#include <algorithm>
#include <vector>

std::vector<std::vector<int>>
threeSum(std::vector<int> nums) {
    std::vector<std::vector<int>> result;

    if (nums.size() < 3) {
        return result;
    }

    std::sort(nums.begin(), nums.end());

    const std::size_t n = nums.size();

    for (std::size_t i = 0; i + 2 < n; ++i) {

        // Skip duplicate fixed values.
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        std::size_t left = i + 1;
        std::size_t right = n - 1;

        while (left < right) {
            const long long sum =
                static_cast<long long>(nums[i]) +
                nums[left] +
                nums[right];

            if (sum < 0) {
                ++left;
            }
            else if (sum > 0) {
                --right;
            }
            else {
                result.push_back({
                    nums[i],
                    nums[left],
                    nums[right]
                });

                ++left;
                --right;

                // Skip duplicate second values.
                while (left < right &&
                       nums[left] == nums[left - 1]) {
                    ++left;
                }

                // Skip duplicate third values.
                while (left < right &&
                       nums[right] == nums[right + 1]) {
                    --right;
                }
            }
        }
    }

    return result;
}
