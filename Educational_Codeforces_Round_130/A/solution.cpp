#include <string>
#include <vector>
#include <cstdint>
#include <numeric>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    int64_t m;

    std::cin >> n >> m;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    int64_t total = std::accumulate(vec.begin(), vec.end(), 0);

    std::cout << (m >= total ? 0 : total - m) << '\n';
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
