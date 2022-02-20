#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t a, b;
    std::cin >> a >> b;

    auto const sum = a + b;
    auto const num = sum / 4;

    auto const res = std::min(std::min(a, b), num);

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
