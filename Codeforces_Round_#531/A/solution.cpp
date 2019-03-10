#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::uint64_t n = 0;
    std::cin >> n;

    std::uint64_t const sum = n * (n + 1) / 2;
    if (sum % 2 == 0)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << 1 << std::endl;
    }

    return 0;
}
