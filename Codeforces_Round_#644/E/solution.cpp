#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::size_t n;
    std::cin >> n;

    std::vector<std::vector<char>> matrix(n + 1, std::vector<char>(n + 1));

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (size_t i = 0; i < n + 1; i++)
    {
        matrix[i][n] = '1';
        matrix[n][i] = '1';
    }

    for (size_t x = 0; x < n; x++)
    {
        for(size_t y = 0; y < n; y++)
        {
            if (matrix[x][y] == '1' && matrix[x + 1][y] == '0' && matrix[x][y + 1] == '0')
            {
                std::cout << "NO\n";
                return;
            }
        }
    }

    std::cout << "YES\n";
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
