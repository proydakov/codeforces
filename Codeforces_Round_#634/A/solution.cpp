#include <cstdint>
#include <iostream>

void solve()
{
    int val;
    std::cin >> val;
    int res = val / 2;
    if (val % 2 == 0)
    {
        res--;
    }
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
