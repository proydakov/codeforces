#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> data(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    int64_t res = 0;

    for(size_t i = 0; i < n - 1; i++)
    {
        auto const min = std::min(data[i], data[i + 1]);
        auto const max = std::max(data[i], data[i + 1]);

        res = std::max(res, min * max);
    }

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
