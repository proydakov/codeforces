#include <cstdint>
#include <iostream>

void solve()
{
    size_t l, r;
    std::cin >> l >> r;

    if (2 * l > r)
    {
        std::cout << "-1 -1\n";
    }
    else
    {
        std::cout << l << " " << 2 * l << "\n";
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
