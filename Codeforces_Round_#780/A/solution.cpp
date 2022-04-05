#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t a, b;
    std::cin >> a >> b;

    if (a == 0 && b == 0)
    {
        std::cout << "1\n";
    }
    else if (a == 0)
    {
        std::cout << 1 << '\n';
    }
    else
    {
        std::cout << (a + b * 2 + 1) << '\n';
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
