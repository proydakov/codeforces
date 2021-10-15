#include <set>
#include <map>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::map<std::int64_t, std::int64_t> map;
    for(size_t i = 0; i < n; i++)
    {
        std::int64_t val;
        std::cin >> val;

        map[val]++;
    }

    std::set<std::int64_t> set;
    for(auto const [k, v] : map)
    {
        if (v == 1)
        {
            set.insert(k);
        }
        else
        {
            set.insert(k);
            set.insert(k + 1);
            auto it = map.find(k + 1);
            if (it != map.end())
            {
                it->second++;
            }
        }
    }

    std::cout << set.size() << '\n';
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
