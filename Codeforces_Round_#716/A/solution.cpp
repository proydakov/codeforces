#include <cmath>
#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    bool res = false;
    for(int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;

        int val = std::sqrt(a);

        if (val * val != a)
        {
            res = true;
        }
    }

    std::cout << (res ? "YES" : "NO") << std::endl;
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
