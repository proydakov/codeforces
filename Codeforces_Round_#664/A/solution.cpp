#include <cstdint>
#include <iostream>

bool is_good(int r, int g, int b, int w)
{
    int even = 0;
    if (r % 2 == 1)
    {
        even++;
    }

    if (g % 2 == 1)
    {
        even++;
    }

    if (b % 2 == 1)
    {
        even++;
    }

    if (w % 2 == 1)
    {
        even++;
    }

    return even <= 1;
}

void solve()
{
    int r, g, b, w;
    std::cin >> r >> g >> b >> w;

    if (is_good(r, g, b, w) || (r > 0 && g > 0 && b > 0 && is_good(r - 1, g - 1, b - 1, w + 3)))
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
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
