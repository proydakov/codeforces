#define _USE_MATH_DEFINES

#include <cmath>
#include <cstdio>
#include <iostream>

struct point_t
{
    std::int64_t x;
    std::int64_t y;
};

bool operator<=(point_t const p1, point_t const p2)
{
    return p1.x <= p2.x && p1.y <= p2.y;
}

bool operator>=(point_t const p1, point_t const p2)
{
    return p1.x >= p2.x && p1.y >= p2.y;
}

point_t convert(point_t const input)
{
    std::int64_t const x1 = input.x * std::cos(M_PI_4) - input.y * std::sin(M_PI_4);
    std::int64_t const y1 = input.x * std::sin(M_PI_4) + input.y * std::cos(M_PI_4);
    return point_t{x1, y1};
}

enum { SCALE = 1'000'000'000 };

int main()
{
    std::ios::sync_with_stdio(false);

    std::int64_t n = 0;
    std::int64_t d = 0;

    std::cin >> n;
    std::cin >> d;

    n *= SCALE;
    d *= SCALE;

    point_t const p1 = convert({0, d});
    point_t const p2 = convert({n, n - d});

    int counter = 0;
    std::cin >> counter;

    for(int i = 0; i < counter; i++)
    {
        std::int64_t x = 0;
        std::int64_t y = 0;

        std::cin >> x;
        std::cin >> y;

        x *= SCALE;
        y *= SCALE;

        point_t p{x, y};
        p = convert(p);

        if (p >= p1 && p <= p2)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
