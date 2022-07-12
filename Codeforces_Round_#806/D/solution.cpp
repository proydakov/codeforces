#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_set>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::string> vec(n);
    std::unordered_set<std::string> set;
    set.reserve(n);

    for(size_t i = 0; i < n; i++)
    {
        std::string str;
        std::cin >> str;

        vec[i] = str;
        set.insert(str);            
    }

    for(auto const& str : vec)
    {
        bool has{};
        for(size_t i = 1; i < str.size(); i++)
        {
            auto const s1 = str.substr(0, i);
            auto const s2 = str.substr(i);

            if (set.contains(s1) && set.contains(s2))
            {
                has = true;
                break;
            }
        }
        std::cout << (has ? '1' : '0');
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
