#include <cstdint>
#include <iostream>

void solve()
{
    int n, m;
    std::cin >> n >> m;

    int res = 0;

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char c;
            std::cin >> c;

            if (j == (m - 1) && c == 'R')
            {
                res++;
            }
        } 
    }

    for(int j = 0; j < m; j++)
    {
        char c;
        std::cin >> c;

        if (c == 'D')
        {
            res++;
        }
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
