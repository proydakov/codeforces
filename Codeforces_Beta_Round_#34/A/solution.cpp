#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    int min = 9'999'999;
    size_t i1 = 0;
    size_t i2 = 1;

    for(size_t i = 0; i < n; i++)
    {
        auto j = (i + 1) % n;
        {
            auto const a = std::max(vec[i], vec[j]);
            auto const b = std::min(vec[i], vec[j]);
            auto const tmin = std::abs(a - b);
            if (tmin < min)
            {
                min = tmin;
                i1 = i;
                i2 = j;
            }
        }
    }

    std::cout << (i1 + 1) << ' ' << (i2 + 1) << '\n';
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
