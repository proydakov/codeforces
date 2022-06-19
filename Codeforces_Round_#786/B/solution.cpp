#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

auto init()
{
    std::unordered_map<std::string, int64_t> res;

    size_t i = 1;
    for(char c = 'a'; c <= 'z'; c++)
    {
        for(char b = 'a'; b <= 'z'; b++)
        {
            if (c != b)
            {
                std::string key;
                key.push_back(c);
                key.push_back(b);

                res[key] = i;
                i++;
            }
        }
    }

    return res;
}

std::unordered_map<std::string, int64_t> map = init();

void solve()
{
    std::string str;
    std::cin >> str;

    std::cout << map[str] << '\n';
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
