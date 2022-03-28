#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::uint64_t val{};
    std::cin >> val;

    std::uint64_t res{1ul << val};
    res--;

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
