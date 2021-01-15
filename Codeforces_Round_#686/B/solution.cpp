#include <cstdint>
#include <iostream>
#include <map>

void solve()
{
    int t;
    std::cin >> t;

    std::map<int, std::pair<int, int>> map;
    for(int i = 0; i < t; i++)
    {
        int val;
        std::cin >> val;

        auto& pair = map[val];
        pair.first++;
        pair.second = i + 1;
    }

    for(auto const& [key, val] : map)
    {
        if (val.first == 1)
        {
            std::cout << val.second << '\n';
            return;
        }
    }

    std::cout << "-1\n";
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
