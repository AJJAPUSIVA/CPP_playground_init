#include <cstddef>
#include <optional>
#include <utility>
#include <vector>

std::optional<std::pair<std::size_t, std::size_t>>
findPairSumIndicesBruteForce(
    const std::vector<int>& numbers,
    int target
) {
    for (std::size_t first = 0;
         first < numbers.size();
         ++first) {

        for (std::size_t second = first + 1;
             second < numbers.size();
             ++second) {

            if (numbers[first] + numbers[second] == target) {
                return std::pair{first, second};
            }
        }
    }

    return std::nullopt;
}

#include <iostream>

int main() {
    const std::vector<int> numbers{2, 7, 11, 15};
    const int target = 9;

    const auto result = findPairSumIndicesBruteForce(numbers, target);

    if (result.has_value()) {
        const auto [firstIndex, secondIndex] = *result;
        std::cout << "Indices: " << firstIndex << ", " << secondIndex << '\n';
    } else {
        std::cout << "No matching pair found\n";
    }

    return 0;
}
