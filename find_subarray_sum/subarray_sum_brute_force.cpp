#include <vector>

long long subarraySumBruteForce(
    const std::vector<int>& nums,
    long long k
) {
    long long count = 0;

    for (std::size_t start = 0;
         start < nums.size();
         ++start) {

        long long sum = 0;

        for (std::size_t end = start;
             end < nums.size();
             ++end) {

            sum += nums[end];

            if (sum == k) {
                ++count;
            }
        }
    }

    return count;
}
