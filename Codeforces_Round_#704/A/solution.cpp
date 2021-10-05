#include <limits>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::uint64_t p, a, b, c;
    std::cin >> p >> a >> b >> c;

    std::vector<std::uint64_t> vec(3);
    vec[0] = a;
    vec[1] = b;
    vec[2] = c;

    std::uint64_t res = std::numeric_limits<std::uint64_t>::max();
    for(auto const v : vec)
    {
        auto const div = p / v;
        auto const ost = p % v;
        if (ost == 0)
        {
            res = 0;
        }
        else
        {
            auto const big = (div + 1) * v;
            auto const delta = big - p;
            res = std::min(delta, res);
        }
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
