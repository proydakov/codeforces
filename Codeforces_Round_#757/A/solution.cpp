#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    int64_t l, r, k;

    std::cin >> n >> l >> r >> k;

    std::vector<int64_t> vec;
    vec.reserve(n);
    for(size_t i = 0; i < n; i++)
    {
        int64_t val;
        std::cin >> val;

        if (val >= l && val <= r)
        {
            vec.emplace_back(val);
        }
    }

    std::sort(vec.begin(), vec.end());

    size_t res{};
    int64_t accum{};
    for(auto const v : vec)
    {
        accum += v;
        if (accum > k)
        {
            break;
        }
        res++;
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
