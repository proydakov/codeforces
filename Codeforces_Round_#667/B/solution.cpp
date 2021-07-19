#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t a, b, x, y, n;
    std::cin >> a >> b >> x >> y >> n;

    auto solver = [](auto a, auto b, auto x, auto y, auto n)
    {
        auto const delta1 = std::min(a - x, n);
        n -= delta1;
        a -= delta1;

        auto const delta2 = std::min(b - y, n);
        b -= delta2;

        return a * b;
    };

    auto const res = std::min(solver(a, b, x, y, n), solver(b, a, y, x, n));
    std::cout << res << "\n";
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
