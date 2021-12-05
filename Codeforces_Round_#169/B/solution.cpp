#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

void solve()
{
    std::string str;
    std::cin >> str;

    std::unordered_map<char, int> map;
    map.reserve(32);

    for(auto const s : str)
    {
        map[s] += 1;
    }

    int odd = 0;
    for(auto const [_, v] : map)
    {
        if (v % 2 != 0)
        {
            odd += 1;
        }
    }

    if (odd < 2)
    {
        std::cout << "First\n";
    }
    else
    {
        std::cout << (odd % 2 == 0 ? "Second" : "First") << "\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    {
        solve();
    }

    return 0;
}
