#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::size_t s;
    std::cin >> s;

    std::cout << (s - 1) << '\n';
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
