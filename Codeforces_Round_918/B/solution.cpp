#include <set>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    for(int i = 0; i < 3; i++)
    {
        std::string line;
        std::cin >> line;

        std::set<char> set;
        set.insert('A');
        set.insert('B');
        set.insert('C');

        for(auto c : line)
        {
            set.erase(c);
        }

        if (not set.empty())
        {
            std::cout << *set.begin() << std::endl;
        }
    }
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
