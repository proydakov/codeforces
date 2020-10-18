#include <cstdint>
#include <iostream>

void solve()
{
    int n, x;
    std::cin >> n >> x;

    for(int i = 2, level = 1; i < 1'000'000; i += x, level++)
    {
        if (n <= i)
        {
            std::cout << level << '\n';
            return;
        }
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
