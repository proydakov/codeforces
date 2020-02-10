#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::size_t n;
    std::cin >> n;

    std::size_t dsize = 2 * n;
    std::vector<std::int64_t> data(dsize);
    for(std::size_t i = 0; i < dsize; i++)
    {
        std::cin >> data[i];
    }
    std::sort(data.begin(), data.end());
    std::cout << data[n] - data[n - 1] << std::endl;
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
