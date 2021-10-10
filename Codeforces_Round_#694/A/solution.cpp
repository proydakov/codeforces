#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::int64_t x;
    std::cin >> x;

    std::int64_t max{};
    std::int64_t total{};
    for(size_t i = 0; i < n; i++)
    {
        std::int64_t t;
        std::cin >> t;
        total += t;

        max += t / x;
        if (t % x > 0)
        {
            max++;
        }
    }
    std::int64_t min = total / x;
    if(total % x > 0)
    {
        min++;
    }
    std::cout << min << ' ' << max << '\n';
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
