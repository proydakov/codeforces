#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t n;
    std::cin >> n;

    if (n % 2 == 1)
    {
        std::cout << "-1\n";
    }
    else
    {
        std::cout << (n / 2) << ' ' << (n / 2) << ' ' << "0\n";
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
