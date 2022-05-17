#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int64_t calc(std::vector<std::vector<int64_t>> const& mat, int64_t i, int64_t j, int64_t n, int64_t m)
{
    int64_t res{};

    for(int64_t x = i, y = j; x >= 0 && y >= 0; x--, y--)
    {
        res += mat[x][y];
    }

    for(int64_t x = i, y = j; x >= 0 && y < m; x--, y++)
    {
        res += mat[x][y];
    }

    for(int64_t x = i, y = j; x < n && y >= 0; x++, y--)
    {
        res += mat[x][y];
    }

    for(int64_t x = i, y = j; x < n && y < m; x++, y++)
    {
        res += mat[x][y];
    }

    res -= mat[i][j] * 3;

    return res;
}

void solve()
{
    size_t n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int64_t>> mat(n, std::vector<int64_t>(m));
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < m; j++)
        {
            std::cin >> mat[i][j];
        }
    }

    int64_t max{};

    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < m; j++)
        {
            max = std::max(max, calc(mat, i, j, n, m));
        }
    }

    std::cout << max << '\n';
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
