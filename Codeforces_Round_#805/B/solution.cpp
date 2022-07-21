#include <set>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    size_t res{};
    std::set<char> set;
    for(size_t i = 0; i < str.size(); i++)
    {
        auto const c = str[i];
        set.insert(c);
        if (set.size() == 4)
        {
            res++;
            i--;
            set.clear();
        }
    }

    if (not set.empty())
    {
        res++;
    }

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
