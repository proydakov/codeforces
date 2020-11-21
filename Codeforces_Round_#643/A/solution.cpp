#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

bool has_zero(std::int64_t v, int& min, int& max)
{
    min = 9;
    max = 0;
    bool has = false;
    while(v > 0)
    {
        int const ost = v % 10;
        has |= (ost == 0);
        min = std::min(min, ost);
        max = std::max(max, ost);
        v /= 10;
    }
    return has;
}

void solve()
{
    std::int64_t a, k;
    std::cin >> a >> k;

    int min = 9;
    int max = 0;
    for(std::int64_t i = 1; i < k && !has_zero(a, min, max); i++)
    {
        a += min * max;
    }

    std::cout << a << "\n";
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
