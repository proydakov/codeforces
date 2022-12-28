#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    char c1, c2, c3;
    std::cin >> c1 >> c2 >> c3;

    int i1 = c1 - '0';
    int i3 = c3 - '0';

    std::cout << (i1 + i3) << '\n';
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
