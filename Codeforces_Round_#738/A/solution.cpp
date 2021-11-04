#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::uint64_t val;
    std::cin >> val;

    for(size_t i = 1; i < n; i++)
    {
        std::uint64_t test;
        std::cin >> test;

        val &= test;
    }

    std::cout << val << '\n';
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
