#include <algorithm>
#include <cstddef>
#include <optional>
#include <utility>
#include <vector>

std::optional<std::pair<std::size_t, std::size_t>>
findPairSumIndicesSorted(
    const std::vector<int>& numbers,
    int target
) {
    std::vector<std::pair<int, std::size_t>> values;
    values.reserve(numbers.size());

    for (std::size_t i = 0; i < numbers.size(); ++i) {
        values.emplace_back(numbers[i], i);
    }

    std::sort(values.begin(), values.end());

    std::size_t left = 0;
    std::size_t right = values.size();

    while (left < right) {
        --right;

        while (left < right) {
            const long long sum =
                static_cast<long long>(values[left].first) +
                values[right].first;

            if (sum == target) {
                return std::pair{
                    values[left].second,
                    values[right].second
                };
            }

            if (sum < target) {
                ++left;
                ++right;
                break;
            }

            --right;
        }
    }

    return std::nullopt;
}
