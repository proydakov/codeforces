#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int64_t calc(int64_t a, int64_t b)
{
    return 2 * (a - 1) + b;
}

void solve()
{
    int64_t n, m;
    std::cin >> n >> m;

    int64_t v = std::min(calc(n, m), calc(m, n));
    if (n + m == 2)
    {
        v = 0;
    }

    std::cout << v << '\n';
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
