#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int a, b;
    std::cin >> a >> b;

    auto min = std::min(a, b);
    auto max = std::max(a, b);

    auto height = 2 * min;
    auto res = std::max(max, height);
    std::cout << res * res << '\n';
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
