#include <cstddef>
#include <optional>
#include <unordered_map>
#include <utility>
#include <vector>

std::optional<std::pair<std::size_t, std::size_t>>
findEarliestPairSumIndices(
    const std::vector<int>& numbers,
    int target
) {
    std::unordered_map<int, std::size_t> firstIndexByValue;
    firstIndexByValue.reserve(numbers.size());

    for (std::size_t currentIndex = 0;
         currentIndex < numbers.size();
         ++currentIndex) {

        const int requiredValue = target - numbers[currentIndex];

        if (const auto match = firstIndexByValue.find(requiredValue);
            match != firstIndexByValue.end()) {
            return std::pair{match->second, currentIndex};
        }

        firstIndexByValue.try_emplace(
            numbers[currentIndex],
            currentIndex
        );
    }

    return std::nullopt;
}
