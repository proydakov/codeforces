#include <cstdint>
#include <iostream>

void solve()
{
    int64_t a, b, c;
    std::cin >> a >> b >> c;

    auto const min = std::min(a, b);
    auto const max = std::max(a, b);

    auto const delta = max - min;
    auto const size = delta + delta;

    if (a > size || b > size || c > size)
    {
        std::cout << "-1\n";
    }
    else
    {
        auto res = c + delta;
        if (res > size)
        {
            res -= size;
        }
        std::cout << res << "\n";
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
