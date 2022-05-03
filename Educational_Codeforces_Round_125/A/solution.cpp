#include <cmath>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int x, y;
    std::cin >> x >> y;

    int const v = std::sqrt(x * x + y * y);
    int res = -1;
    if (0 == x && 0 == y)
    {
        res = 0;
    }
    else if ((v * v) == (x * x + y * y))
    {
        res = 1;
    }
    else
    {
        res = 2;
    }

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
