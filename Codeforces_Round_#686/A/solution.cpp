#include <cstdint>
#include <iostream>

void solve()
{
    int t;
    std::cin >> t;

    for(int i = 2; i <= t; i++)
    {
        std::cout << i << ' ';
    }
    std::cout << 1 << '\n';
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
