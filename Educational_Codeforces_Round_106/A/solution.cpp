#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n, k1, k2;
    int w, b;

    int s1, s2;

    std::cin >> n >> k1 >> k2 >> w >> b;

    s1 = k1 + k2;
    if (w > s1 / 2)
    {
        goto no;
    }

    s2 = n + n - k1 - k2;
    if (b > s2 / 2)
    {
        goto no;
    }

    std::cout << "YES\n";
    return;

no:
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
