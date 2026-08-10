#include <unordered_map>
#include <vector>

long long subarraySumEqualsK(
    const std::vector<int>& nums,
    long long k
) {
    std::unordered_map<long long, long long> prefixFrequency;
    prefixFrequency.reserve(nums.size() + 1);

    prefixFrequency[0] = 1;

    long long prefix = 0;
    long long count = 0;

    for (int value : nums) {
        prefix += value;

        if (const auto it =
                prefixFrequency.find(prefix - k);
            it != prefixFrequency.end()) {

            count += it->second;
        }

        ++prefixFrequency[prefix];
    }

    return count;
}
