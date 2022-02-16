#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t a;
    std::cin >> a;

    if (a % 7 == 0)
    {
        std::cout << a << '\n';
    }
    else
    {
        a = a - a % 10;
        while(a % 7 != 0)
        {
            a++;
        }
        std::cout << a << '\n';
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
