#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int y = n % 2020;

    int x = (n - y) / 2020 - y;

    if (x >= 0)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
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
