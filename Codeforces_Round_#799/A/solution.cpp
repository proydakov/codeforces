#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t a, b, c, d;
    std::cin >> a >> b >> c >> d;

    size_t res{};

    if (b > a)
    {
        res++;
    }

    if (c > a)
    {
        res++;
    }

    if (d > a)
    {
        res++;
    }

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
