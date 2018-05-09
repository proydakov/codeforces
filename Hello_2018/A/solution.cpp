#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::uint32_t n;
    std::uint32_t m;

    std::cin >> n;
    std::cin >> m;

    std::uint32_t const val = (n > 31) ? 0 : (1 << n);

    if(val != 0)
    {
        std::cout << m % val << std::endl;
    }
    else
    {
        std::cout << m << std::endl;
    }

    return 0;
}
