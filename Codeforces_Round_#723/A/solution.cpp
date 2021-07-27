#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> data(2 * n);
    for(size_t i = 0; i < 2 * n; i++)
    {
        std::cin >> data[i];
    }
    std::sort(data.begin(), data.end());

    for(size_t i = 0; i < n; i++)
    {
        std::cout << data[i] << ' ' << data[n + i] << ' ';
    }
    std::cout << '\n';
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
