#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t l, r, a;
    std::cin >> l >> r >> a;

    auto const test = r - r % a - 1;
    auto const f1 = r / a + r % a;
    auto const f2 = (test >= l ? (test / a + test % a) : 0);

    std::cout << std::max(f1, f2) << '\n';
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
