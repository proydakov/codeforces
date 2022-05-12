#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int64_t digit_sum(int64_t val)
{
    int64_t res{};
    while(val > 0)
    {
        res += val % 10;
        val /= 10;
    }
    return res;
}

void solve()
{
    std::int64_t val;
    std::cin >> val;

    auto a1 = val % 1000;
    auto a2 = val / 1000;

    std::cout << (digit_sum(a1) == digit_sum(a2) ? "YES\n" : "NO\n");
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
