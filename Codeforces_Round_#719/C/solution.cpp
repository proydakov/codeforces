#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    if (2 == n)
    {
        std::cout << "-1\n";
        return;
    }

    for(size_t i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for(size_t j = 1, k = i + n; j < n; j++, k += n)
            {
                std::cout << k << ' ';
            }
            std::cout << i;
        }
        else
        {
            for(size_t j = 0, k = i; j < n; j++, k+= n)
            {
                std::cout << k << ' ';
            }
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
