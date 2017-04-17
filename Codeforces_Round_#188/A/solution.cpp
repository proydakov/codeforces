#include <cstdint>
#include <iostream>

int main()
{
    uint64_t n; uint64_t k;
    std::cin >> n;
    std::cin >> k;

    if(n % 2 == 1) {
        n++;
    }

    uint64_t val = 0;

    uint64_t half = n / 2;
    if(k <= half) {
        uint64_t index = k;
        val = 2 * index - 1;
    }
    else {
        uint64_t index = k - half;
        val = 2 * index;
    }

    std::cout << val << std::endl;

    return 0;
}
