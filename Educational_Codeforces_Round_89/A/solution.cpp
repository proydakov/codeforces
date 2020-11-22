#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int a, b;
    std::cin >> a >> b;

    int res = std::min(a, std::min(b, (a + b) / 3));
    std::cout << res << "\n";
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
