#include <cstdint>
#include <iostream>

void solve()
{
    int64_t n;
    std::cin >> n;

    auto const div = n / 3;
    auto const ost = n % 3;
    std::cout << (div + (ost == 1 ? 1 : 0)) << ' ' << (div + (ost == 2 ? 1 : 0)) << '\n';
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
