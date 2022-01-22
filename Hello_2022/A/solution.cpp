#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, k;
    std::cin >> n >> k;

    auto const m = n / 2 + n % 2;
    if (k > m)
    {
        std::cout << "-1\n";
    }
    else
    {
        size_t o = 0;
        for(size_t i = 1; i <= n; i++)
        {
            for(size_t j = 1; j <= n; j++)
            {
                if (i % 2 == 1 && j % 2 == 1 && i == j)
                {
                    std::cout << (o < k ? 'R' : '.');
                    o++;
                }
                else
                {
                    std::cout << '.';
                }
            }
            std::cout << '\n';
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
