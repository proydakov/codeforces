#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, m;
    std::cin >> n >> m;

    std::vector<int32_t> va(n);
    std::vector<int32_t> vb(m);

    for(auto& e : va) std::cin >> e;
    for(auto& e : vb) std::cin >> e;

    std::sort(va.begin(), va.end());
    
    for(auto b : vb)
    {
        auto it = std::upper_bound(va.begin(), va.end(), b);
        std::cout << std::distance(va.begin(), it) << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    {
        solve();
    }

    return 0;
}
