#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, m;
    std::cin >> n >> m;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    int total{};
    for(size_t i = 0; i < m; i++)
    {
        int val;
        std::cin >> val;
        if (std::binary_search(vec.begin(), vec.end(), val))
        {
            total++;
        }
    }
    std::cout << total << '\n';
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
