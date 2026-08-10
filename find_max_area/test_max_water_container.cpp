#include <cassert>
#include <vector>

void testMaxWaterContainer() {
    {
        const std::vector<int> height{
            1, 8, 6, 2, 5, 4, 8, 3, 7
        };

        assert(maxWaterContainer(height) == 49);
    }

    {
        const std::vector<int> height{1, 1};

        assert(maxWaterContainer(height) == 1);
    }

    {
        const std::vector<int> height{4, 3, 2, 1, 4};

        assert(maxWaterContainer(height) == 16);
    }

    {
        const std::vector<int> height{5, 5, 5, 5};

        assert(maxWaterContainer(height) == 15);
    }

    {
        const std::vector<int> height{0, 0, 0};

        assert(maxWaterContainer(height) == 0);
    }

    {
        const std::vector<int> height{5};

        assert(maxWaterContainer(height) == 0);
    }

    {
        const std::vector<int> height{};

        assert(maxWaterContainer(height) == 0);
    }
}
