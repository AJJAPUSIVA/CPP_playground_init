#include <cstdint>
#include <unordered_map>
#include <vector>

std::int64_t countSubarraysWithSum(
    const std::vector<int>& values,
    std::int64_t target
) {
    std::unordered_map<std::int64_t, std::int64_t>
        prefixFrequency;

    prefixFrequency.reserve(values.size() + 1);
    prefixFrequency.emplace(0, 1);

    std::int64_t prefixSum = 0;
    std::int64_t resultCount = 0;

    for (const int value : values) {
        prefixSum += value;

        const std::int64_t requiredPrefix =
            prefixSum - target;

        if (const auto it =
                prefixFrequency.find(requiredPrefix);
            it != prefixFrequency.end()) {

            resultCount += it->second;
        }

        ++prefixFrequency[prefixSum];
    }

    return resultCount;
}
