#include <cstdint>
#include <iostream>

void solve()
{
    long x, y, a, b;
    std::cin >> x >> y >> a >> b;

    long distance = y - x;
    long speed = a + b;
    if (distance % speed == 0)
    {
        std::cout << (distance / speed) << std::endl;
    }
    else
    {
        std::cout << -1 << std::endl;
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
