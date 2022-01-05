#include <cmath>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

std::vector<int64_t> init_pow2_pow3_numbers()
{
    std::vector<int64_t> result;

    for(int64_t n = 1, k = n * n; k <= 1'000'000'000; n++, k = n * n)
    {
        result.push_back(k);
    }

    for(int64_t n = 1, k = n * n * n; k <= 1'000'000'000; n++, k = n * n * n)
    {
        result.push_back(k);
    }

    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());

    return result;
}

static const std::vector<int64_t> g_numbers = init_pow2_pow3_numbers();

void solve()
{
    int64_t n;
    std::cin >> n;

    auto it = std::upper_bound(g_numbers.begin(), g_numbers.end(), n);
    std::cout << std::distance(g_numbers.begin(), it) << '\n';
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
