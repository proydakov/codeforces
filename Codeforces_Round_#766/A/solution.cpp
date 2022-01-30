#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, m, r, c;
    std::cin >> n >> m >> r >> c;

    r--;
    c--;

    bool has_black{};
    std::vector<std::vector<char>> matrix(n, std::vector<char>(m, ' '));
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
            if ('B' == matrix[i][j])
            {
                has_black = true;
            }
        }
    }

    auto const r_has = [&]()
    {
        for(size_t j = 0; j < m; j++)
        {
            if ('B' == matrix[r][j])
            {
                return true;
            }
        }

        return false;
    };

    auto const c_has = [&]()
    {
        for(size_t i = 0; i < n; i++)
        {
            if ('B' == matrix[i][c])
            {
                return true;
            }
        }

        return false;
    };

    int res{-1};
    if ('B' == matrix[r][c])
    {
        res = 0;
    }
    else if(r_has() || c_has())
    {
        res = 1;
    }
    else if(has_black)
    {
        res = 2;
    }

    std::cout << res << '\n';
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
