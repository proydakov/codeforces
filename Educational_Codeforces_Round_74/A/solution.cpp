#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t x, y;
    std::cin >> x >> y;

    if (x - y == 1)
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
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
