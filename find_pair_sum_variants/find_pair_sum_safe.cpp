#include <cstddef>
#include <cstdint>
#include <optional>
#include <unordered_map>
#include <utility>
#include <vector>

std::optional<std::pair<std::size_t, std::size_t>>
findPairSumIndicesSafe(const std::vector<int>& numbers, int target) {
    std::unordered_map<std::int64_t, std::size_t> indexByValue;
    indexByValue.reserve(numbers.size());

    const auto wideTarget = static_cast<std::int64_t>(target);

    for (std::size_t currentIndex = 0;
         currentIndex < numbers.size();
         ++currentIndex) {

        const auto currentValue =
            static_cast<std::int64_t>(numbers[currentIndex]);

        const auto requiredValue = wideTarget - currentValue;

        const auto match = indexByValue.find(requiredValue);

        if (match != indexByValue.end()) {
            return std::pair{match->second, currentIndex};
        }

        indexByValue[currentValue] = currentIndex;
    }

    return std::nullopt;
}

#include <iostream>

int main() {
    const std::vector<int> numbers{2, 7, 11, 15};
    const int target = 9;

    const auto result = findPairSumIndicesSafe(numbers, target);

    if (result.has_value()) {
        const auto [firstIndex, secondIndex] = *result;
        std::cout << "Indices: " << firstIndex << ", " << secondIndex << '\n';
    } else {
        std::cout << "No matching pair found\n";
    }

    return 0;
}
