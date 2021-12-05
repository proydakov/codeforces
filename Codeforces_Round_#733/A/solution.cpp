#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t n;
    std::cin >> n;

    int64_t max = 0;

    while(n > 0)
    {
        auto const v = n % 10;
        n /= 10;

        max = std::max(v, max);
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
