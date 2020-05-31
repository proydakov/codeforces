#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t x, y;
    int64_t a, b;

    std::cin >> x >> y;
    std::cin >> a >> b;

    if (int64_t(2) * a <= b)
    {
        std::cout << (x + y) * a;
    }
    else
    {
        auto min = std::min(x, y);
        auto max = std::max(x, y);
        std::cout << (min * b + (max - min) * a);
    }

    std::cout << '\n';
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
