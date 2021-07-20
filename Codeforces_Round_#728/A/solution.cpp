#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    if (n % 2 == 0)
    {
        for(size_t i = 1; i < n; i += 2)
        {
            std::cout << (i + 1) << ' ' << i << ' ';
        }
    }
    else
    {
        std::cout << 3 << ' ' << 1 << ' ' << 2 << ' ';
        for(size_t i = 4; i < n; i += 2)
        {
            std::cout << (i + 1) << ' ' << i << ' ';
        }

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
