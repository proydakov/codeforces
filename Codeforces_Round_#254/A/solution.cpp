#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, m;
    std::cin >> n >> m;

    bool is_white = false;
    for(size_t y = 0; y < n; y++)
    {
        for(size_t x = 0; x < m; x++)
        {
            char c;
            std::cin >> c;

            if (c == '-')
            {
                std::cout << '-';
                continue;
            }

            if (is_white)
            {
                std::cout << (x % 2 == 0 ? 'W' : 'B');
            }
            else
            {
                std::cout << (x % 2 == 1 ? 'W' : 'B');
            }
        }

        is_white = !is_white;
        std::cout << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
