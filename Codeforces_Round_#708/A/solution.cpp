#include <map>
#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    std::map<int, int> map;
    for(size_t i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;
        map[val]++;
    }

    while (not map.empty())
    {
        for(auto it = map.begin(); it != map.end();)
        {
            std::cout << it->first << ' ';
            if(--it->second <= 0)
            {
                it = map.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }
    std::cout << '\n';
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
