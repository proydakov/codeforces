#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int32_t a, b, c;
    std::cin >> a >> b >> c;

    auto d1 = a - 1;
    auto d2 = std::abs(b - c) + c - 1;

    if (d1 == d2)
    {
        std::cout << "3\n";
    }
    else if (d1 > d2)
    {
        std::cout << "2\n";
    }
    else
    {
        std::cout << "1\n";
    }
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
