#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t n, b, x, y;
    std::cin >> n >> b >> x >> y;

    int64_t a{};
    int64_t c{};

    for(int64_t i = 0; i <= n; i++)
    {
        a += c;
        auto const tc = c + x;
        if (tc <= b)
        {
            c = tc;
        }
        else
        {
            c -= y;
        }
    }

    std::cout << a << '\n';
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
