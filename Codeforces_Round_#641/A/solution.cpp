#include <cstdint>
#include <iostream>

void solve()
{
    int64_t n, k;
    std::cin >> n >> k;

    int64_t step = 2;
    for(; n % step != 0; step++);

    n += step;
    k--;

    n += 2 * k;
    std::cout << n << '\n';
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
