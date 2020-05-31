#include <cstdint>
#include <iostream>

void solve()
{
    int n, m;
    std::cin >> n >> m;

    auto square = n * m;
    auto res = square / 2;
    if (square % 2 == 1)
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
