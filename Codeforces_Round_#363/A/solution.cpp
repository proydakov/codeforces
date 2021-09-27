#include <vector>
#include <limits>
#include <cstdint>
#include <iostream>
#include <algorithm>

enum
{
    RELAX = 0,
    CONT = 1,
    GYM  = 2,

    SIZE
};

void solve()
{
    size_t n;
    std::cin >> n;

    using day_t = int;
    std::vector<day_t> days(n + 1);
    for(size_t i = 1; i <= n; i++)
    {
        std::cin >> days[i];
    }

    using cell_t = int;
    std::vector<std::vector<cell_t>> dp(n + 1, std::vector<cell_t>(SIZE, 0));

    for(size_t i = 1; i <= n; i++)
    {
        dp[i][RELAX] = std::min({dp[i - 1][RELAX], dp[i - 1][CONT], dp[i - 1][GYM]}) + 1;

        auto const day = days[i];
        if (day == 1 || day == 3)
        {
            dp[i][CONT] = std::min(dp[i - 1][RELAX], dp[i - 1][GYM]);
        }
        else
        {
            dp[i][CONT] = std::numeric_limits<cell_t>::max();

        }

        if (day == 2 || day == 3)
        {
            dp[i][GYM] = std::min(dp[i - 1][RELAX], dp[i - 1][CONT]);
        }
        else
        {
            dp[i][GYM] = std::numeric_limits<cell_t>::max();
        }
    }

    std::cout << std::min({dp[n][RELAX], dp[n][CONT], dp[n][GYM]}) << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
