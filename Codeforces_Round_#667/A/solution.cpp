#include <cstdint>
#include <iostream>
#include <cstdlib>

void solve()
{
    int a, b;
    std::cin >> a >> b;

    int delta = std::abs(a - b);

    int res = delta / 10;
    if (delta % 10 != 0)
    {
        res++;
    }

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
