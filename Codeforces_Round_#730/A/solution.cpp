#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::uint64_t a, b;
    std::cin >> a >> b;

    if (a == b)
    {
        std::cout << "0 0\n";
    }
    else
    {
        if (a < b)
        {
            std::swap(a, b);
        }
        auto const g = a - b;
        auto const ost = a % g;
        auto const s = std::min(ost, g - ost);
        std::cout << g << ' ' << s << '\n';
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
