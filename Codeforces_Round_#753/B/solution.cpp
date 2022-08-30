#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t x0, n;
    std::cin >> x0 >> n;

    if (x0 % 2 == 0)
    {
        if (n % 4 == 1)
        {
            std::cout << (x0 - n) << '\n';
        }
        else if (n % 4 == 2)
        {
            std::cout << (x0 + 1) << '\n';
        }
        else if (n % 4 == 3)
        {
            std::cout << (x0 + n + 1) << '\n';
        }
        else
        {
            std::cout << (x0) << '\n';
        }
    }
    else
    {
        if (n % 4 == 1)
        {
            std::cout << (x0 + n) << '\n';
        }
        else if (n % 4 == 2)
        {
            std::cout << (x0 - 1) << '\n';
        }
        else if (n % 4 == 3)
        {
            std::cout << (x0 - n - 1) << '\n';
        }
        else
        {
            std::cout << (x0) << '\n';
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
