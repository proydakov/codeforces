#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void fl(std::vector<std::vector<int>>& mat, int x, int y)
{
    if (x < 0 || x >= 3 || y < 0 || y >= 3)
    {
        return;
    }

    if (mat[x][y] == 1)
    {
        mat[x][y] = 0;
    }
    else
    {
        mat[x][y] = 1;
    }
}

void flip(std::vector<std::vector<int>>& mat, int x, int y)
{
    fl(mat, x, y);
    fl(mat, x + 1, y);
    fl(mat, x, y + 1);
    fl(mat, x - 1, y);
    fl(mat, x, y - 1);
}

void solve()
{
    std::vector<std::vector<int>> mat(3, std::vector<int>(3, 0));
    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < 3; j++)
        {
            std::cin >> mat[i][j];
        }
    }

    std::vector<std::vector<int>> res(3, std::vector<int>(3, 1));
    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < 3; j++)
        {
            if (mat[i][j] % 2)
            {
                flip(res, i, j);
            }
        }
    }

    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < 3; j++)
        {
            std::cout << res[i][j];
        }
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
