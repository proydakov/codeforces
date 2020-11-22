#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    int max = 0;
    int active = 0;
    for(auto c : str)
    {
        if ('L' == c)
        {
            active++;
        }
        else
        {
            max = std::max(max, active);
            active = 0;
        }
    }

    max = std::max(max, active);

    std::cout << (max + 1) << "\n";
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
