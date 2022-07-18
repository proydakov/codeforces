#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> vecs(n);
    for(auto& e : vecs) std::cin >> e;

    std::vector<int64_t> vecf(n);
    for(auto& e : vecf) std::cin >> e;

    int64_t current = 0;
    for(size_t i = 0; i < n; i++)
    {
        current = std::max(current, vecs[i]);
        auto const delta = (vecf[i] - current);

        std::cout << delta << ' ';

        current = std::max(current, vecf[i]);
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
