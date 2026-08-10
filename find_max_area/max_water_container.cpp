#include <algorithm>
#include <vector>

long long maxWaterContainer(
    const std::vector<int>& height
) {
    if (height.size() < 2) {
        return 0;
    }

    std::size_t left = 0;
    std::size_t right = height.size() - 1;

    long long bestArea = 0;

    while (left < right) {
        const long long width =
            static_cast<long long>(right - left);

        const long long containerHeight =
            std::min(height[left], height[right]);

        const long long area =
            width * containerHeight;

        bestArea = std::max(bestArea, area);

        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return bestArea;
}
