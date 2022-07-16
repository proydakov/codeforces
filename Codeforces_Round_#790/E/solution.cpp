#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, q;
    std::cin >> n >> q;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end(), std::greater());

    std::vector<int64_t> sum(n);
    sum[0] = vec[0];

    for(size_t i = 1; i < n; i++)
    {
        sum[i] = vec[i] + sum [i - 1];
    }

    for(size_t i = 0; i < q; i++)
    {
        int64_t req{};
        std::cin >> req;
        auto const it = std::lower_bound(sum.begin(), sum.end(), req);
        if (it != sum.end())
        {
            std::cout << (1 + std::distance(sum.begin(), it)) << '\n';
        }
        else
        {
            std::cout << "-1\n";
        }
    }
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
