#include <cstdint>
#include <iostream>
#include <algorithm>

//        M
// [0 0 0 4 4 4 5]

void solve()
{
    std::int64_t n, s;
    std::cin >> n >> s;

    auto const len = n / 2 + 1;
    auto const res = s / len;

    std::cout << res << '\n';
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
