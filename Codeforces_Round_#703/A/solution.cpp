#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::int64_t min{};
    std::int64_t total{};
    for(size_t i = 0; i < n; i++)
    {
        min += i;
        total += vec[i];

        if (total < min)
        {
            std::cout << "NO\n";
            return;
        }
    }

    std::cout << "YES\n";
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
