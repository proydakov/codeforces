#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::int64_t k;

    std::cin >> n >> k;

    std::vector<std::pair<std::int64_t, std::int64_t>> vec(n, {0, 0});

    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i].first;
    }

    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i].second;
    }

    std::sort(vec.begin(), vec.end());

    std::int64_t res = k;
    for(auto const& [a, b] : vec)
    {
        if (res >= a)
        {
            res += b;
        }
        else
        {
            break;
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
