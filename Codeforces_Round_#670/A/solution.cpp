#include <map>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int mex(std::map<int, int> const& map, int score)
{
    int val{};

    for(size_t i = 0; ; i++)
    {
        auto const it = map.find(i);
        if (it != map.end() && it->second >= score)
        {
            val = (i + 1);
        }
        else
        {
            break;
        }
    }

    return val;
}

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::map<int, int> map;
    for(auto const e : vec)
    {
        map[e]++;
    }

    int const v1 = mex(map, 1);
    int const v2 = mex(map, 2);

    std::cout << (v1 + v2) << '\n';
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
