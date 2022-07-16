#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int c0{};
    int c1{};

    for(size_t i = 0; i < 4; i++)
    {
        int v;
        std::cin >> v;

        if (v == 1)
        {
            c1++;
        }
        else
        {
            c0++;
        }
    }

    if (c1 == 4)
    {
        std::cout << "2\n";
    }
    else if(c1 == 0)
    {
        std::cout << "0\n";
    }
    else
    {
        std::cout << "1\n";
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
