#include <vector>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    if (n == 2)
    {
        std::cout << 2 << "\n";
        return;
    }

    int g1 = 2 << (n - 1);
    for(int i = 1; i < n / 2; i++)
    {
        g1 += 2 << (i - 1);
    }

    int g2 = 0;
    for(int i = n / 2; i < n; i++)
    {
        g2 += 2 << (i - 1);
    }
    std::cout << g1 - g2 << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        solve();
    }

    return 0;
}
