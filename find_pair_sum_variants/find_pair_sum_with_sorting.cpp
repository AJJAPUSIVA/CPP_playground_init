#include <algorithm>
#include <cstddef>
#include <optional>
#include <utility>
#include <vector>

std::optional<std::pair<std::size_t, std::size_t>>
findPairSumIndicesWithSorting(
    const std::vector<int>& numbers,
    int target
) {
    if (numbers.size() < 2) {
        return std::nullopt;
    }

    std::vector<std::pair<int, std::size_t>> values;
    values.reserve(numbers.size());

    for (std::size_t index = 0;
         index < numbers.size();
         ++index) {
        values.emplace_back(numbers[index], index);
    }

    std::sort(values.begin(), values.end());

    std::size_t left = 0;
    std::size_t right = values.size() - 1;

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
        } else {
            --right;
        }
    }

    return std::nullopt;
}

#include <iostream>

int main() {
    const std::vector<int> numbers{2, 7, 11, 15};
    const int target = 9;

    const auto result = findPairSumIndicesWithSorting(numbers, target);

    if (result.has_value()) {
        const auto [firstIndex, secondIndex] = *result;
        std::cout << "Indices: " << firstIndex << ", " << secondIndex << '\n';
    } else {
        std::cout << "No matching pair found\n";
    }

    return 0;
}
