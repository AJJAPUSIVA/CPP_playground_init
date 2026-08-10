#include <unordered_map>
#include <vector>

long long subarraySumEqualsK(
    const std::vector<int>& nums,
    long long k
) {
    std::unordered_map<long long, long long> prefixFrequency;

    // One empty prefix with sum 0.
    prefixFrequency[0] = 1;

    long long currentPrefix = 0;
    long long count = 0;

    for (int value : nums) {
        currentPrefix += value;

        const long long requiredPrefix =
            currentPrefix - k;

        if (const auto it =
                prefixFrequency.find(requiredPrefix);
            it != prefixFrequency.end()) {

            count += it->second;
        }

        ++prefixFrequency[currentPrefix];
    }

    return count;
}
