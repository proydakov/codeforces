#include <vector>
#include <limits>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

struct vertex
{
    size_t min = std::numeric_limits<size_t>::max();
    size_t max = 0;
};

bool search1(std::vector<int> const& vec)
{
    std::unordered_map<int, vertex> map;
    map.reserve(vec.size());

    for(size_t i = 0; i < vec.size(); i++)
    {
        auto const val = vec[i];
        map[val].min = std::min(map[val].min, i);
        map[val].max = std::max(map[val].max, i);
    }

    for(auto const [key, val] : map)
    {
        if (val.min != std::numeric_limits<size_t>::max() && val.max != 0)
        {
            if (val.max - val.min > 1)
            {
                return true;
            }
        }
    }

    return false;
}

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    auto const found = search1(vec);
    std::cout << (found ? "YES\n" : "NO\n");
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
