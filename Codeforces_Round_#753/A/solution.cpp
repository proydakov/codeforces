#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

void solve()
{
    std::string keyboard;
    std::string word;

    std::cin >> keyboard >> word;

    std::unordered_map<char, int> map;
    map.reserve(keyboard.size());

    for(size_t i = 0; i < keyboard.size(); i++)
    {
        auto const key = keyboard[i];
        map[key] = i;
    }

    int result = 0;

    for(size_t i = 1; i < word.size(); i++)
    {
        auto const k1 = word[i - 1];
        auto const k2 = word[i];

        result += std::abs(map[k1] - map[k2]);
    }

    std::cout << result << '\n';
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
