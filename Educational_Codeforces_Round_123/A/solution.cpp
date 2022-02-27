#include <set>
#include <cctype>
#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    std::set<char> set;
    for(auto const c : str)
    {
        if ('r' == c || 'g' == c || 'b' == c)
        {
            set.insert(c);
        }
        if ('R' == c || 'G' == c || 'B' == c)
        {
            if (!set.contains(std::tolower(c)))
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
