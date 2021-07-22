#include <cstdint>
#include <iostream>

void solve()
{
    int64_t n, m, k;
    std::cin >> n >> m >> k;

    auto const dx = m - 1;
    auto const dy = n - 1;

    auto const res = dx + m * dy;

    std::cout << (res == k ? "YES\n" : "NO\n"); 
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
