#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int h;
    std::cin >> h;
    int const origin_ost = h % 2;

    bool res = true;
    for(int i = 1; i < n; i++)
    {
        std::cin >> h;
        int const test_ost = h % 2;
        if (test_ost != origin_ost)
        {
            res = false;
        }
    }
    std::cout << (res ? "YES" : "NO") << "\n";
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
