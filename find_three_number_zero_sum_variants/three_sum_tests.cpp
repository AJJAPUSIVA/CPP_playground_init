#include <algorithm>
#include <cassert>
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

                while (left < right &&
                       nums[left] == nums[left - 1]) {
                    ++left;
                }

                while (left < right &&
                       nums[right] == nums[right + 1]) {
                    --right;
                }
            }
        }
    }

    return result;
}

void testThreeSum() {
    {
        auto result =
            threeSum({-1, 0, 1, 2, -1, -4});

        assert(result.size() == 2);
    }

    {
        auto result = threeSum({0, 0, 0, 0});

        assert(result.size() == 1);
        assert(result[0] == std::vector<int>({0, 0, 0}));
    }

    {
        auto result = threeSum({1, 2, 3});

        assert(result.empty());
    }

    {
        auto result = threeSum({});

        assert(result.empty());
    }

    {
        auto result = threeSum({1, -1});

        assert(result.empty());
    }

    {
        auto result =
            threeSum({-2, 0, 0, 2, 2});

        assert(result.size() == 1);
        assert(result[0] == std::vector<int>({-2, 0, 2}));
    }
}

int main() {
    testThreeSum();
    return 0;
}
