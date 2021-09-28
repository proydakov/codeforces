#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    if (n % 2 == 1)
    {
        std::cout << "0\n";
        return;
    }

    n /= 2;

    std::cout << (std::int64_t(1) << n) << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    {
        solve();
    }

    return 0;
}
