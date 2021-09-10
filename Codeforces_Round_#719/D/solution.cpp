#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int32_t> vec(n);
    std::unordered_map<int32_t, std::vector<size_t>> map;
    map.reserve(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
        map[vec[i] - i].emplace_back(i);
    }

    int64_t res = 0;
    for(size_t i = 0; i < n; i++)
    {
        auto const val = vec[i] - i;
        auto it = map.find(val);
        if (it != map.end())
        {
            auto const& val = it->second;
            auto const vit = std::upper_bound(val.begin(), val.end(), i);
            res += std::distance(val.begin(), std::prev(vit));
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
