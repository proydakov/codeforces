#include <cstdint>
#include <iostream>

void solve()
{
    int64_t r, b, d;
    std::cin >> r >> b >> d;

    auto const min = std::min(r, b);
    auto const max = std::max(r, b);

    if (max > min * (d + 1))
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
