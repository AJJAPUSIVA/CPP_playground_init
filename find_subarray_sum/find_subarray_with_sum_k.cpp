#include <optional>
#include <unordered_map>
#include <utility>
#include <vector>

std::optional<std::pair<std::size_t, std::size_t>>
findSubarrayWithSumK(
    const std::vector<int>& nums,
    long long k
) {
    std::unordered_map<long long, std::size_t> prefixIndex;

    long long prefix = 0;

    for (std::size_t i = 0; i < nums.size(); ++i) {
        prefix += nums[i];

        if (prefix == k) {
            return std::pair<std::size_t, std::size_t>{
                0,
                i
            };
        }

        const long long required = prefix - k;

        if (const auto it = prefixIndex.find(required);
            it != prefixIndex.end()) {

            return std::pair{
                it->second + 1,
                i
            };
        }

        prefixIndex.try_emplace(prefix, i);
    }

    return std::nullopt;
}
