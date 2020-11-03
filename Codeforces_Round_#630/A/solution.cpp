#include <cstdint>
#include <iostream>

void solve()
{
    std::int64_t a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::int64_t x, y;
    std::cin >> x >> y;

    std::int64_t x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    std::int64_t const xres = x + b - a;
    std::int64_t const yres = y + d - c;

    bool const c1 = (x1 == x2) && ((a > 0) || (b > 0));
    bool const c2 = (y1 == y2) && ((c > 0) || (d > 0));
    bool const c3 = (x1 <= xres && xres <= x2) && (y1 <= yres && yres <= y2);
    if (c1 || c2 || !c3)
    {
        std::cout << "No\n";
    }
    else
    {
        std::cout << "Yes\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
