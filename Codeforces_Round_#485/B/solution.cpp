#include <cmath>
#include <cstdint>
#include <iostream>
#include <algorithm>

bool double_equals(double a, double b, double epsilon = 0.0001)
{
    return std::abs(a - b) < epsilon;
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::uint32_t x;
    std::uint32_t y;

    std::cin >> x;
    std::cin >> y;

    std::uint32_t const min = std::min(x, y);
    std::uint32_t const max = std::max(x, y);

    if(x == y)
    {
        std::cout << '=';
    }
    else if(1 == x or 1 == y)
    {
        if(1 == x)
        {
            std::cout << '<';
        }
        else if(1 == y)
        {
            std::cout << '>';
        }
        else
        {
            std::cout << '=';
        }
    }
    else
    {
        double const xy = y * std::log10(x);
        double const yx = x * std::log10(y);

        if(double_equals(xy, yx))
        {
            std::cout << '=';
        }
        else if(xy < yx)
        {
            std::cout << '<';
        }
        else
        {
            std::cout << '>';
        }
    }

    std::cout << std::endl;

    return 0;
}
