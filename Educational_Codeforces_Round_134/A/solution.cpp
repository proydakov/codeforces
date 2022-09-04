#include <set>
#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::set<char> set;

    std::string str;
    
    for(size_t i = 0; i < 2; i++)
    {
        std::cin >> str;
        for(auto const s : str)
        {
            set.insert(s);
        }
    }

    std::cout << (set.size() - 1) << '\n';
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
