#include <cassert>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    std::size_t writeIndex = 0;

    for (std::size_t readIndex = 0;
         readIndex < nums.size();
         ++readIndex) {

        if (nums[readIndex] != 0) {
            nums[writeIndex] = nums[readIndex];
            ++writeIndex;
        }
    }

    while (writeIndex < nums.size()) {
        nums[writeIndex] = 0;
        ++writeIndex;
    }
}

void testMoveZeroes() {
    {
        std::vector<int> nums{0, 1, 0, 3, 12};

        moveZeroes(nums);

        assert(
            nums ==
            std::vector<int>({1, 3, 12, 0, 0})
        );
    }

    {
        std::vector<int> nums{0, 0, 0};

        moveZeroes(nums);

        assert(
            nums ==
            std::vector<int>({0, 0, 0})
        );
    }

    {
        std::vector<int> nums{1, 2, 3};

        moveZeroes(nums);

        assert(
            nums ==
            std::vector<int>({1, 2, 3})
        );
    }

    {
        std::vector<int> nums{0, 5};

        moveZeroes(nums);

        assert(
            nums ==
            std::vector<int>({5, 0})
        );
    }

    {
        std::vector<int> nums{
            0, -1, 0, -2, 3
        };

        moveZeroes(nums);

        assert(
            nums ==
            std::vector<int>({-1, -2, 3, 0, 0})
        );
    }

    {
        std::vector<int> nums{};

        moveZeroes(nums);

        assert(nums.empty());
    }
}

int main() {
    testMoveZeroes();
    return 0;
}
