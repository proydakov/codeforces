#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    int c0{};
    int c1{};
    for(auto const c : str)
    {
        if ('0' == c)
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }

    auto min = std::min(c0, c1);
    if (c0 == c1 && min > 0)
    {
        min--;
    }

    std::cout << min << '\n';
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
