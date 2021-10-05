#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::uint64_t a, b;
    std::cin >> a >> b;

    auto const ixor = a ^ b;

    std::cout << ixor << '\n';
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
