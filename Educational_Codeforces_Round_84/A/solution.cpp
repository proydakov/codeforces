#include <cstdint>
#include <iostream>

void solve()
{
    std::int64_t n, k;
    std::cin >> n;
    std::cin >> k;

    if ((n % 2 != k % 2) or (k * k > n))
    {
        std::cout << "NO";
    }
    else
    {
        std::cout << "YES";
    }
    std::cout << "\n";
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
