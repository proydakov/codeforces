#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    if (n <= 3)
    {
        std::cout << (n - 1) << "\n";
    }
    else
    {
        if (n % 2 == 0)
        {
            std::cout << 2 << "\n";
        }
        else
        {
            std::cout << 3 << "\n";
        }
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
