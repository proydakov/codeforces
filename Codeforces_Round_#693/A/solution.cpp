#include <cstdint>
#include <iostream>

void solve()
{
    int64_t w, h, n;
    std::cin >> w >> h >> n;

    int64_t t = 1;
    while(w % 2 == 0)
    {
        t *= 2;
        w /= 2;
    }

    while(h % 2 == 0)
    {
        t *= 2;
        h /= 2;
    }

    if (t >= n)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
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
