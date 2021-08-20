#include <vector>
#include <limits>
#include <numeric>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int32_t> data(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    std::sort(data.begin(), data.end());

    auto const val = std::accumulate(data.begin(), data.end() - 1, std::int64_t{0});
    double const first = static_cast<double>(val) / (n - 1);
    double const last = data.back();

    std::cout << (first + last) << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cout.precision(7);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
