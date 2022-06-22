#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::vector<std::vector<char>> mat(8, std::vector<char>(8, ' '));
    for(size_t i = 0; i < 8; i++)
    {
        for(size_t j = 0; j < 8; j++)
        {
            std::cin >> mat[i][j];
        }
    }

    size_t prev_count{};
    for(size_t i = 0; i < 8; i++)
    {
        size_t x = i;
        size_t y = 0;
        size_t count{};
        for(size_t j = 0; j < 8; j++)
        {
            if ('#' == mat[i][j])
            {
                count++;
                y = j;
            }
        }
        if (1 == count && prev_count == 2)
        {
            std::cout << (x + 1) << ' ' << (y + 1) << '\n';
            break;
        }
        prev_count = count;
        count = 0;
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
