#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t x, y, k;
    std::cin >> x >> y >> k;

    auto const res = ((y + 1) * k - 1 + x - 2) / (x - 1) + k;
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
