#include <cstdint>
#include <iostream>

void solve()
{
    int a, b;
    std::cin >> a >> b;

    if (a == 1 || b == 1 || (a == 2 && b == 2))
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
