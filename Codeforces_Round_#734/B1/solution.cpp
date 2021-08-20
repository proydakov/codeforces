#include <string>
#include <cstdint>
#include <iostream>
#include <unordered_map>

void solve()
{
    std::string str;
    std::cin >> str;

    std::unordered_map<char, size_t> map;

    for(auto const s : str)
    {
        map[s] += 1;
    }

    size_t one{};
    size_t pair{};

    for(auto const [_, val] : map)
    {
        if (val == 1)
        {
            one++;
        }
        else
        {
            pair++;
        }
    }

    auto const res = pair + one / 2;
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
