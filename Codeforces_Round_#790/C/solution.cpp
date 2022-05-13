#include <limits>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int64_t dist(std::string_view s1, std::string_view s2, size_t s)
{
    int64_t res{};
    for(size_t i = 0; i < s; i++)
    {
        res += std::abs(s1[i] - s2[i]);
    }
    return res;
}

void solve()
{
    size_t n, m;
    std::cin >> n >> m;

    std::vector<std::string> vec(n);
    for(auto& e : vec) std::cin >> e;

    int64_t res = std::numeric_limits<int64_t>::max();
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = i + 1; j < n; j++)
        {
            res = std::min(res, dist(vec[i], vec[j], m));
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
