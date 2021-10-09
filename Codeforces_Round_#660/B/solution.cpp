#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    auto const t = (n + 3) / 4;
    for(size_t i = 0; i < n - t; i++)
    {
        std::cout << 9;
    }

    for(size_t i = 0; i < t; i++)
    {
        std::cout << 8;
    }

    std::cout << '\n';
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
