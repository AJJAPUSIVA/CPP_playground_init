#include <algorithm>
#include <vector>

std::vector<std::vector<int>>
threeSumOptimized(std::vector<int> nums) {
    std::vector<std::vector<int>> result;

    if (nums.size() < 3) {
        return result;
    }

    std::sort(nums.begin(), nums.end());

    const std::size_t n = nums.size();

    for (std::size_t i = 0; i + 2 < n; ++i) {

        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        if (nums[i] > 0) {
            break;
        }

        const long long minimumPossible =
            static_cast<long long>(nums[i]) +
            nums[i + 1] +
            nums[i + 2];

        if (minimumPossible > 0) {
            break;
        }

        const long long maximumPossible =
            static_cast<long long>(nums[i]) +
            nums[n - 2] +
            nums[n - 1];

        if (maximumPossible < 0) {
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

                const int leftValue = nums[left];
                const int rightValue = nums[right];

                while (left < right &&
                       nums[left] == leftValue) {
                    ++left;
                }

                while (left < right &&
                       nums[right] == rightValue) {
                    --right;
                }
            }
        }
    }

    return result;
}
