#include <limits>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, x;
    std::cin >> n >> x;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    size_t kval{};
    size_t min = std::numeric_limits<size_t>::max();
    size_t max = std::numeric_limits<size_t>::min();

    std::int64_t total{};
    for(size_t i = 0; i < n; i++)
    {
        auto const e = vec[i];

        if (e % x == 0)
        {
            kval++;
        }
        else
        {
            min = std::min(min, i);
            max = std::max(max, i);
        }

        total += e;
    }

    if (kval == n)
    {
        std::cout << "-1\n";
    }
    else
    {
        if (total % x != 0)
        {
            std::cout << n << '\n';
        }
        else
        {
            std::cout << (n - std::min(min + 1, n - max)) << '\n';
        }
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
