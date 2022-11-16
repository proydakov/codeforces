#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::string str;
    std::cin >> str;

    std::unordered_map<int64_t, char> map;
    for(size_t i = 0; i < n; i++)
    {
        char c = str[i];
        int64_t v = vec[i];

        auto it = map.find(v);
        if (it == map.end())
        {
            map[v] = c;
        }
        else
        {
            if (c != it->second)
            {
                std::cout << "NO\n";
                return;
            }
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
