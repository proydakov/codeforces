#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::int64_t> r(n);
    for(auto& e : r) std::cin >> e;

    std::cin >> n;
    std::vector<std::int64_t> b(n);
    for(auto& e : b) std::cin >> e;

    std::int64_t accum = 0;
    std::int64_t rmax = 0;

    for(auto const& e : r)
    {
        accum += e;
        rmax = std::max(rmax, accum);
    }

    accum = 0;
    std::int64_t bmax = 0;

    for(auto const& e : b)
    {
        accum += e;
        bmax = std::max(bmax, accum);
    }

    std::cout << (rmax + bmax) << '\n';
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
