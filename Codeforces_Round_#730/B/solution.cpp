#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t n;
    std::cin >> n;

    int64_t sum{};
    for(int64_t i = 0; i < n; i++)
    {
        int64_t v{};
        std::cin >> v;

        sum += v;
    }

    auto const ost = sum % n;
    auto const res = ost * (n - ost);

    std::cout << res << '\n';
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
