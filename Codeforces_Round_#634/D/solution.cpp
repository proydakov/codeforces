#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    char mat[9][9];

    for(size_t i = 0; i < 9; i++)
    {
        for(size_t j = 0; j < 9; j++)
        {
            char c;
            std::cin >> c;
            mat[i][j] = (c != '9' ? c : '1');
        }
    }

    for(size_t i = 0; i < 9; i++)
    {
        for(size_t j = 0; j < 9; j++)
        {
            std::cout << mat[i][j];
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
