#include <algorithm>
#include <optional>
#include <vector>

struct ContainerResult {
    long long area;
    std::size_t leftIndex;
    std::size_t rightIndex;
};

std::optional<ContainerResult>
maxWaterContainerWithIndices(
    const std::vector<int>& height
) {
    if (height.size() < 2) {
        return std::nullopt;
    }

    std::size_t left = 0;
    std::size_t right = height.size() - 1;

    ContainerResult best{
        0,
        left,
        right
    };

    while (left < right) {
        const long long width =
            static_cast<long long>(right - left);

        const long long containerHeight =
            std::min(height[left], height[right]);

        const long long area =
            width * containerHeight;

        if (area > best.area) {
            best = {
                area,
                left,
                right
            };
        }

        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return best;
}
