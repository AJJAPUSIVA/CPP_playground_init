#include <algorithm>
#include <cstdint>
#include <vector>

std::int64_t maximumContainerArea(
    const std::vector<int>& heights
) {
    if (heights.size() < 2) {
        return 0;
    }

    std::size_t left = 0;
    std::size_t right = heights.size() - 1;

    std::int64_t maximumArea = 0;

    while (left < right) {
        const auto width =
            static_cast<std::int64_t>(right - left);

        const auto limitingHeight =
            static_cast<std::int64_t>(
                std::min(
                    heights[left],
                    heights[right]
                )
            );

        maximumArea = std::max(
            maximumArea,
            width * limitingHeight
        );

        if (heights[left] <= heights[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return maximumArea;
}
