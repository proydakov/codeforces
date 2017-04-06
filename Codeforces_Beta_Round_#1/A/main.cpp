#include <cmath>
#include <cstdint>
#include <iostream>

int main()
{
    uint64_t n;
    uint64_t m;
    uint64_t a;

    std::cin >> n;
    std::cin >> m;
    std::cin >> a;

    uint64_t rn = n / a;
    uint64_t rm = m / a;

    if(n % a) {
        rn++;
    }

    if(m % a) {
        rm++;
    }

    uint64_t r = rn * rm;

    std::cout << r << std::endl;

    return 0;
}
