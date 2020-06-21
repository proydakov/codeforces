#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t n, a, b;
    std::cin >> n >> a >> b;

    int64_t const s1 = n * a;
    int64_t const s2 = n / 2 * b + (n % 2 == 1 ? a : 0);

    std::cout << std::min(s1, s2) << '\n';
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
