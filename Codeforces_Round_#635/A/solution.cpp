#include <iostream>

void solve()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int x = b;
    int z = c;
    int y = z - x + 1;
    y = std::max(y, b);

    std::cout << x << ' ' << y << ' ' << z << '\n';
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
