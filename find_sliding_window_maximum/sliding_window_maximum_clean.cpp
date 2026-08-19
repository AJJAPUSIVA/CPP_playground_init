#include <cstddef>
#include <deque>
#include <vector>

std::vector<int> slidingWindowMaximumClean(
    const std::vector<int>& nums,
    std::size_t k
) {
    if (nums.empty() || k == 0 || k > nums.size()) {
        return {};
    }

    std::vector<int> result;
    result.reserve(nums.size() - k + 1);

    std::deque<std::size_t> window;

    for (std::size_t i = 0; i < nums.size(); ++i) {

        if (!window.empty() &&
            window.front() + k <= i) {
            window.pop_front();
        }

        while (!window.empty() &&
               nums[window.back()] <= nums[i]) {
            window.pop_back();
        }

        window.push_back(i);

        if (i >= k - 1) {
            result.push_back(nums[window.front()]);
        }
    }

    return result;
}
