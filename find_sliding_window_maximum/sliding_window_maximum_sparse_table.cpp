#include <algorithm>
#include <cmath>
#include <cstddef>
#include <vector>

std::vector<int> slidingWindowMaximumSparseTable(
    const std::vector<int>& nums,
    std::size_t windowSize
) {
    if (nums.empty() || windowSize == 0 ||
        windowSize > nums.size()) {
        return {};
    }

    const std::size_t n = nums.size();

    // Precompute log values.
    const std::size_t logMax =
        static_cast<std::size_t>(
            std::log2(static_cast<double>(windowSize))
        ) + 1;

    // sparse[j][i] = max of nums[i..i + 2^j - 1].
    std::vector<std::vector<int>> sparse(
        logMax,
        std::vector<int>(n)
    );

    // Base case: intervals of length 1.
    for (std::size_t i = 0; i < n; ++i) {
        sparse[0][i] = nums[i];
    }

    // Build table for powers of 2.
    for (std::size_t j = 1; j < logMax; ++j) {
        const std::size_t halfLength =
            static_cast<std::size_t>(1) << (j - 1);

        for (std::size_t i = 0;
             i + (static_cast<std::size_t>(1) << j) - 1 < n;
             ++i) {

            sparse[j][i] = std::max(
                sparse[j - 1][i],
                sparse[j - 1][i + halfLength]
            );
        }
    }

    // Answer each window query in O(1).
    const std::size_t resultCount =
        n - windowSize + 1;

    const std::size_t k =
        static_cast<std::size_t>(
            std::log2(static_cast<double>(windowSize))
        );
    const std::size_t blockSize =
        static_cast<std::size_t>(1) << k;

    std::vector<int> result;
    result.reserve(resultCount);

    for (std::size_t i = 0; i < resultCount; ++i) {
        const int windowMax = std::max(
            sparse[k][i],
            sparse[k][i + windowSize - blockSize]
        );
        result.push_back(windowMax);
    }

    return result;
}

#include <iostream>

int main() {
    const std::vector<int> nums{
        1, 3, -1, -3, 5, 3, 6, 7
    };
    const std::size_t windowSize = 3;

    const auto result =
        slidingWindowMaximumSparseTable(
            nums, windowSize
        );

    for (const int value : result) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
