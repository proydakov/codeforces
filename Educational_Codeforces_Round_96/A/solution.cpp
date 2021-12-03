#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int32_t n;
    std::cin >> n;

    for(int32_t i5 = 0; i5 <= 1000; i5 += 5)
    {
        for(int32_t i7 = 0; i7 <= 1000; i7 += 7)
        {
            auto const i3 = n - (i5 + i7);
            if (i3 >= 0 && i3 % 3 == 0)
            {
                std::cout << (i3 / 3) << ' ' << (i5 / 5) << ' ' << (i7 / 7) << '\n';
                return;
            }
        }
    }

    std::cout << -1 << '\n';
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
