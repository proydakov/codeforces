#include <cmath>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t n;
    std::cin >> n;

    if (n % 2 != 0)
    {
        std::cout << "NO\n";
    }
    else
    {
        while(n % 2 == 0)
        {
            n /= 2;
        }
        auto const s = static_cast<std::int64_t>(std::sqrt(n));
        if (s * s == n)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
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
