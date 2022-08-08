#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t n;
    std::cin >> n;

    if (n == 1)
    {
        std::cout << "2\n";
    }
    else
    {
        int64_t const ost = n % 3;
        int64_t const sub = n / 3;

        if (ost == 0)
        {
            std::cout << (sub) << "\n";
        }
        else if ((sub * 3 + 2) == n)
        {
            std::cout << (sub + 1) << "\n";
        }
        else
        {
            std::cout << (sub - 1 + 2) << "\n";
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
