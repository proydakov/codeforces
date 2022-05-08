#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t h, w;
    std::cin >> h >> w;

    std::vector<std::vector<char>> matrix(h, std::vector<char>(w, ' '));

    for(size_t i = 0; i < h; i++)
    {
        for(size_t j = 0; j < w; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    bool changed = true;
    while(changed)
    {
        changed = false;
        for(size_t i = h - 1; i >= 1; i--)
        {
            for(size_t j = 0; j < w; j++)
            {
                if (matrix[i][j] == '.' && matrix[i - 1][j] == '*')
                {
                    changed = true;
                    std::swap(matrix[i][j], matrix[i - 1][j]);
                }
            }
        }
    }

    for(size_t i = 0; i < h; i++)
    {
        for(size_t j = 0; j < w; j++)
        {
            std::cout << matrix[i][j];
        }
        std::cout << '\n';
    }
    std::cout << '\n';
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
