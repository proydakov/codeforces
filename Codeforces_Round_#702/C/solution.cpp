#include <cmath>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_set>

auto const g_map = [](){
    std::unordered_set<std::uint64_t> map;
    for(std::uint64_t i = 1, qube_i = std::pow(i, 3); qube_i <= std::pow(10, 12); i++, qube_i = std::pow(i, 3))
    {
        map.insert(qube_i);
    }
    return map;
}();

void solve()
{
    std::uint64_t n;
    std::cin >> n;

    for(std::uint64_t j = 1, qube_j = std::pow(j, 3); qube_j <= n; j++, qube_j = std::pow(j, 3))
    {
        if (g_map.find(n - qube_j) != g_map.end())
        {
            std::cout << "YES\n";
            return;
        }
    }

    std::cout << "NO\n";
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
