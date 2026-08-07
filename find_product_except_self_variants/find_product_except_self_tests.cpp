#include <cassert>
#include <cstddef>
#include <vector>

std::vector<long long>
productExceptSelf(const std::vector<int>& values) {
    const std::size_t n = values.size();

    std::vector<long long> result(n, 1);

    long long prefixProduct = 1;

    for (std::size_t index = 0; index < n; ++index) {
        result[index] = prefixProduct;
        prefixProduct *= values[index];
    }

    long long suffixProduct = 1;

    for (std::size_t index = n; index-- > 0;) {
        result[index] *= suffixProduct;
        suffixProduct *= values[index];
    }

    return result;
}

void testProductExceptSelf() {
    {
        const std::vector<int> input{1, 2, 3, 4};

        assert(
            productExceptSelf(input) ==
            std::vector<long long>({24, 12, 8, 6})
        );
    }

    {
        const std::vector<int> input{1, 2, 0, 4};

        assert(
            productExceptSelf(input) ==
            std::vector<long long>({0, 0, 8, 0})
        );
    }

    {
        const std::vector<int> input{0, 2, 0, 4};

        assert(
            productExceptSelf(input) ==
            std::vector<long long>({0, 0, 0, 0})
        );
    }

    {
        const std::vector<int> input{-1, 2, -3, 4};

        assert(
            productExceptSelf(input) ==
            std::vector<long long>({-24, 12, -8, 6})
        );
    }

    {
        const std::vector<int> input{};

        assert(productExceptSelf(input).empty());
    }

    {
        const std::vector<int> input{5};

        assert(
            productExceptSelf(input) ==
            std::vector<long long>({1})
        );
    }
}

int main() {
    testProductExceptSelf();
    return 0;
}
