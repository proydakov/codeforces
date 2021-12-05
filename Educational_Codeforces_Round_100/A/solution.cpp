#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t a, b, c;
    std::cin >> a >> b >> c;

    auto const total = a + b + c;

    if (total % 9 != 0)
    {
        std::cout << "NO\n";
        return;
    }

    auto const dmg = total / 9;

    if (a < dmg || b < dmg || c < dmg)
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
