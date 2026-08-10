#include <algorithm>
#include <unordered_map>
#include <vector>

std::size_t longestSubarraySumK(
    const std::vector<int>& nums,
    long long k
) {
    std::unordered_map<long long, std::ptrdiff_t>
        firstIndex;

    firstIndex[0] = -1;

    long long prefix = 0;
    std::size_t longest = 0;

    for (std::size_t i = 0; i < nums.size(); ++i) {
        prefix += nums[i];

        const long long required = prefix - k;

        if (const auto it = firstIndex.find(required);
            it != firstIndex.end()) {

            const auto length =
                static_cast<std::size_t>(
                    static_cast<std::ptrdiff_t>(i) -
                    it->second
                );

            longest = std::max(longest, length);
        }

        firstIndex.try_emplace(
            prefix,
            static_cast<std::ptrdiff_t>(i)
        );
    }

    return longest;
}
