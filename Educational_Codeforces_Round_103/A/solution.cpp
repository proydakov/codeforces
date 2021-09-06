#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t n, k;
    std::cin >> n >> k;

    if (n > k)
    {
        if (n % k == 0)
        {
            std::cout << "1\n";
        }
        else
        {
            std::cout << "2\n";
        }
    }
    else
    {
        auto const v = k / n + (k % n > 0 ? 1 : 0);
        std::cout << v << '\n';
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
