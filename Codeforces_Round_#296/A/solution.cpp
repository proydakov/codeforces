#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    uint64_t a;
    uint64_t b;
    std::cin >> a;
    std::cin >> b;

    uint64_t acc = 0;
    while(a % b != 0) {
        uint64_t step = a / b;
        acc += step;
        a -= step * b;
        std::swap(a, b);
    }

    std::cout << (acc + a / b) << std::endl;

    return 0;
}
