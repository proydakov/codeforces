#include <cstdint>
#include <iostream>

int numberOfSetBits(uint32_t i)
{
     i = i - ((i >> 1) & 0x55555555);
     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
     return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main()
{
    std::ios::sync_with_stdio(false);

    uint32_t n;
    std::cin >> n;

    std::cout << numberOfSetBits(n) << std::endl;

    return 0;
}
