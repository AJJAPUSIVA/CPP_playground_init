#include <algorithm>
#include <vector>

long long maxAreaBruteForce(
    const std::vector<int>& height
) {
    long long bestArea = 0;

    for (std::size_t left = 0;
         left < height.size();
         ++left) {

        for (std::size_t right = left + 1;
             right < height.size();
             ++right) {

            const long long width =
                static_cast<long long>(right - left);

            const long long containerHeight =
                std::min(height[left], height[right]);

            bestArea = std::max(
                bestArea,
                width * containerHeight
            );
        }
    }

    return bestArea;
}
