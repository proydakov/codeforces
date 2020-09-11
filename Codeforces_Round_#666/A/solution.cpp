#include <cstdint>
#include <iostream>
#include <unordered_map>

void solve()
{
    size_t size;
    std::cin >> size;

    std::unordered_map<char, int> map;

    for(size_t i = 0; i < size; i++)
    {
        std::string str;
        std::cin >> str;

        for(auto const c : str)
        {
            map[c]++;
        }
    }

    for(auto [_, val] : map)
    {
        if (val % size != 0)
        {
            std::cout << "NO\n";
            return;
        }
    }

    std::cout << "YES\n";
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
