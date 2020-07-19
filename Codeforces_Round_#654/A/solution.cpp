#include <cstdint>
#include <iostream>

void solve()
{
    long n;
    std::cin >> n;

    if (n % 2 == 1)
    {
        std::cout << ((n / 2) + 1) << '\n';
    }
    else
    {
        std::cout << (n / 2) << '\n';
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
