#include <vector>
#include <numeric>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int32_t n, x, y;
    std::cin >> n >> x >> y;

    std::vector<int32_t> res(1, std::numeric_limits<int32_t>::max());

    for(int32_t i = 1; i < 51; i++)
    {
        for(int32_t s = 1; s < 51; s++)
        {
            std::vector<int32_t> vec(n, 0);

            int32_t elem {i - s};
            std::generate(vec.begin(), vec.end(), [&elem, s]{
                return elem += s;
            });

            auto const it1 = std::find(vec.begin(), vec.end(), x);
            auto const it2 = std::find(vec.begin(), vec.end(), y);

            if (it1 != vec.end() && it2 != vec.end() && vec.back() < res.back())
            {
                res = vec;
            }
        }
    }

    for(auto const e : res)
    {
        std::cout << e << ' ';
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
