#include <map>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    std::map<char, int> map;
    for(auto const c : str)
    {
        map[c]++;
    }

    std::string result;
    result.reserve(str.size());
    for(auto const [k, v] : map)
    {
        if (v == 2)
        {
            result.push_back(k);
            result.push_back(k);
        }
        else
        {
            result.push_back(k);
        }
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
