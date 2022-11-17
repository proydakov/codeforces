#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    if (n == 1 || n == 3)
    {
        std::cout << "-1\n";
    }
    else if(n == 2)
    {
        std::cout << "2 1\n";
    }
    else
    {
        std::cout << n << ' ' << (n - 1) << ' ';

        for(size_t i = 1; i < n - 1; i++)
        {
            std::cout << i << ' ';
        }
        std::cout << '\n';
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
