#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t l, r;
    std::cin >> l >> r;

    std::int64_t k = r / 2 + 1;
    if (l <= k)
    {
        std::cout << r % k << '\n';
    }
    else
    {
        std::cout << r % l << '\n';
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
