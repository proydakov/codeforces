#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t x, y;
    std::cin >> x >> y;

    if (y % x == 0 && y / x > 0)
    {
        std::cout << 1 << ' ' << y / x << '\n';
    }
    else
    {
        std::cout << "0 0\n";
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
