#include <cmath>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t val;
    std::cin >> val;

    auto const log = std::log10(static_cast<double>(val));
    auto const exp = static_cast<int64_t>(log);

    auto const res = static_cast<int64_t>(std::pow(10.0, exp));

    std::cout << (val - res) << '\n';
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
