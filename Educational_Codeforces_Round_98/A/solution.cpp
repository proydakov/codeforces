#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t x, y;
    std::cin >> x >> y;

    size_t const min = std::min(x, y);
    x -= min;
    y -= min;

    size_t res = min * 2;
    if (x > 0)
    {
        x--;
        res++;
    }

    if (y > 0)
    {
        y--;
        res++;
    }

    res += x * 2;
    res += y * 2;

    std::cout << res << '\n';
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
