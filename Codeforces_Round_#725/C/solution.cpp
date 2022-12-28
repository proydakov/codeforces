#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    int64_t l, r;
    std::cin >> n >> l >> r;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());

    int64_t res{};

    for(size_t i = 0; i < n; i++)
    {
        auto const v = vec[i];
        res += std::distance(vec.begin(), std::upper_bound(vec.begin(), vec.end(), r - v));
        res -= std::distance(vec.begin(), std::lower_bound(vec.begin(), vec.end(), l - v));
        if (l <= 2 * vec[i] && 2 * vec[i] <= r) {
            res--;
        }
    }

    std::cout << (res / 2) << '\n';
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
