#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> v1(n);
    for(auto& e : v1) std::cin >> e;

    std::vector<int64_t> v2(n);
    for(auto& e : v2) std::cin >> e;

    std::vector<int64_t> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        vec[i] = v1[i] - v2[i];
    }

    std::sort(vec.begin(), vec.end());

    int64_t res{};
    for(size_t i = 0; i < n; i++)
    {
        auto const e = vec[i];

        if (e > 0)
        {
            auto const elem = -1 * e + 1;
            auto it = std::lower_bound(vec.begin(), vec.end(), elem);
            auto const dist = std::distance(it, vec.begin() + i);
            res += dist;
        }
    }

    std::cout << res << '\n';
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
