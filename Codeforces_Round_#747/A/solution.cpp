#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t v;
    std::cin >> v;

    std::cout << ((-1 * v) + 1) << ' ' << v << '\n';
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
