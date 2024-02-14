#include <cmath>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    int64_t value{};
    for(size_t i = 0; i < n; i++)
    {
        int64_t k;
        std::cin >> k;

        value += k;
    }

    double sqrt = std::sqrt(static_cast<double>(value));
    int64_t v2 = static_cast<int64_t>(sqrt);
    if (v2 * v2 == value)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
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
