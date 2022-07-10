#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t l, r, k;
    std::cin >> l >> r >> k;

    int64_t c = l == r ? (l % 2) : (l % 2 + r % 2);

    int64_t const l1 = l % 2 ? l + 1 : l;
    int64_t const r1 = r % 2 ? r - 1 : r;

    if (l1 < r1)
    {
        c += (r1 - l1) / 2;
    }

    if (l == r)
    {
        std::cout << (l == 1 ? "NO\n" : "YES\n");
    }
    else
    {
        std::cout << (c <= k ? "YES\n" : "NO\n");
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
