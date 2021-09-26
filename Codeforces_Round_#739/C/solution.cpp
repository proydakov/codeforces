#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t k;
    std::cin >> k;

    for(std::int64_t i = 1; ; i++)
    {
        auto const s = i * i;
        if (k <= s)
        {
            auto const d = k - (i - 1) * (i - 1);
            if (d <= i)
            {
                std::cout << d << ' ' << i << '\n';
            }
            else
            {
                std::cout << i << ' ' << (i + i - d) << '\n';
            }
            break;
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
