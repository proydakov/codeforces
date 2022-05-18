#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t a, b, c, x, y;
    std::cin >> a >> b >> c >> x >> y;

    x -= std::min(x, a);
    y -= std::min(y, b);

    auto extra = x + y;

    std::cout << (extra <= c ? "YES\n" : "NO\n");
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
