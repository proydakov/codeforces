#include <cmath>
#include <cstdint>
#include <iostream>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    int ans = 1'000'000'000;
    if(k >= n)
    {
        ans = 1;
    }
    else
    {
        for(int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i <= k)
                {
                    ans = std::min(ans, n / i);
                }

                if (n / i <= k)
                {
                    ans = std::min(ans, i);
                }
            }
        }
    }
    std::cout << ans << '\n';
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
