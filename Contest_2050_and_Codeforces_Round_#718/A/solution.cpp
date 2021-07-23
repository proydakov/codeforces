#include <cstdint>
#include <iostream>

void solve()
{
    int64_t val;
    std::cin >> val;

    if (val % 2050 == 0)
    {
        int64_t delta = val / 2050;

        int64_t res = 0;
        while(delta > 0)
        {
            res += delta % 10;
            delta /= 10;
        }
        std::cout << res << "\n";
    }
    else
    {
        std::cout << "-1\n";
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
