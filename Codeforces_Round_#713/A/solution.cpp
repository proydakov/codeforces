#include <map>
#include <cstdint>
#include <iostream>

void solve()
{
    std::map<int, std::pair<int, int>> map;

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        auto& ref = map[val];
        ref.first = i;
        ref.second++;
    }

    for(auto const& [key, pair] : map)
    {
        if (pair.second == 1)
        {
            std::cout << (pair.first + 1) << "\n";
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
