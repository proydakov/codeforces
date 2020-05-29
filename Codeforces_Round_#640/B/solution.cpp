#include <iostream>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    int n1 = n - k + 1;
    if(n1 > 0 && n1 % 2 == 1)
    {
        std::cout << "YES\n";
        std::cout << n1 << ' ';
        for(int i = 1; i < k; i++)
        {
            std::cout << "1 ";
        }
        std::cout << "\n";
        return;
    }

    int n2 = n - 2 * k + 2;
    if(n2 > 0 && n2 % 2 == 0)
    {
        std::cout << "YES\n";
        std::cout << n2 << ' ';
        for(int i = 1; i < k; i++)
        {
            std::cout << "2 ";
        }
        std::cout << "\n";
        return;
    }

    std::cout << "NO\n";
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
