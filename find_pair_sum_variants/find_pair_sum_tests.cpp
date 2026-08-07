#include <cassert>
#include <cstddef>
#include <optional>
#include <unordered_map>
#include <utility>
#include <vector>

std::optional<std::pair<std::size_t, std::size_t>>
findPairSumIndices(const std::vector<int>& numbers, int target) {
    std::unordered_map<int, std::size_t> indexByValue;
    indexByValue.reserve(numbers.size());

    for (std::size_t currentIndex = 0;
         currentIndex < numbers.size();
         ++currentIndex) {

        const int currentValue = numbers[currentIndex];
        const int requiredValue = target - currentValue;

        const auto match = indexByValue.find(requiredValue);

        if (match != indexByValue.end()) {
            return std::pair{
                match->second,
                currentIndex
            };
        }

        indexByValue[currentValue] = currentIndex;
    }

    return std::nullopt;
}

void runTests() {
    {
        const std::vector<int> numbers{2, 7, 11, 15};
        const auto result = findPairSumIndices(numbers, 9);

        assert(result.has_value());
        assert(result->first == 0);
        assert(result->second == 1);
    }

    {
        const std::vector<int> numbers{3, 3};
        const auto result = findPairSumIndices(numbers, 6);

        assert(result.has_value());
        assert(result->first != result->second);
    }

    {
        const std::vector<int> numbers{-3, 4, 3, 90};
        const auto result = findPairSumIndices(numbers, 0);

        assert(result.has_value());
        assert(result->first == 0);
        assert(result->second == 2);
    }

    {
        const std::vector<int> numbers{1, 2, 3};
        const auto result = findPairSumIndices(numbers, 100);

        assert(!result.has_value());
    }

    {
        const std::vector<int> numbers{};
        const auto result = findPairSumIndices(numbers, 10);

        assert(!result.has_value());
    }

    {
        const std::vector<int> numbers{5};
        const auto result = findPairSumIndices(numbers, 10);

        assert(!result.has_value());
    }

    {
        const std::vector<int> numbers{0, 4, 3, 0};
        const auto result = findPairSumIndices(numbers, 0);

        assert(result.has_value());
        assert(numbers[result->first] + numbers[result->second] == 0);
    }
}

int main() {
    runTests();
    return 0;
}
