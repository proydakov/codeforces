#include <cstdint>
#include <iostream>

void solve()
{
    int xa, ya;
    std::cin >> xa >> ya;

    int xb, yb;
    std::cin >> xb >> yb;

    int xf, yf;
    std::cin >> xf >> yf;

    int const dx = std::abs(xa - xb);
    int const dy = std::abs(ya - yb);

    int delta = 0;

    if (dx == 0 && xa == xf)
    {
        int const min = std::min(ya, yb);
        int const max = std::max(ya, yb);
        if (yf > min && yf < max)
        {
            delta += 2;
        }
    }

    if (dy == 0 && ya == yf)
    {
        int const min = std::min(xa, xb);
        int const max = std::max(xa, xb);
        if (xf > min && xf < max)
        {
            delta += 2;
        }
    }

    int const res = dx + dy + delta;

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
