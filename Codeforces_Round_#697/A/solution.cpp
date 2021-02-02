#include <cstdint>
#include <iostream>

void solve()
{
    int64_t t;
    std::cin >> t;

    while(t % 2 == 0)
    {
        t /= 2;
    }

    if (t == 1)
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
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
