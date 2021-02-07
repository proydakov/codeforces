#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    long m;
    std::cin >> n >> m;

    long accum = 0;
    for(int i = 0; i < n; i++)
    {
        long val;
        std::cin >> val;

        accum += val;
    }

    if (m == accum)
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
