#include <cstdint>
#include <iostream>

void solve()
{
    std::uint64_t a, b, c;
    std::cin >> a >> b >> c;

    if (a >= c)
    {
        std::cout << -1;
    }
    else
    {
        std::cout << 1;
    }

    std::cout << ' ';

    if (a * b <= c)
    {
        std::cout << -1;
    }
    else
    {
        std::cout << b;
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
