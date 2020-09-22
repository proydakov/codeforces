#include <cstdint>
#include <iostream>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    if (n < k)
    {
        std::cout << (k - n) << "\n";
    }
    else if(n % 2 == k % 2)
    {
        std::cout << 0 << "\n";
    }
    else
    {
        std::cout << 1 << "\n";
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
