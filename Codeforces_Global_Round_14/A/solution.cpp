#include <vector>
#include <cstdint>
#include <numeric>
#include <iostream>
#include <algorithm>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    auto const total = std::accumulate(vec.begin(), vec.end(), 0);
    if (total == k)
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
        int sum{};
        for(size_t i = 0; i < vec.size(); i++)
        {
            if (int v = vec[i]; sum + v == k)
            {
                std::swap(vec[i], vec[i + 1]);
            }
            int const v = vec[i];
            std::cout << v << ' ';
            sum += v;
        }
        std::cout << "\n";
    }
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
