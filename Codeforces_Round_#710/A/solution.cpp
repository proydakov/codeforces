#include <cstdint>
#include <iostream>

void solve()
{
    std::uint64_t n, m, p;
    std::cin >> n >> m >> p;

    p--;
    auto x = p / n;
    auto y = p % n;

    auto r = y * m + (x + 1);

    std::cout << r << "\n";
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
