#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> data(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    auto const [min, max] = std::minmax_element(data.begin(), data.end());

    auto const dmin1 = std::distance(data.begin(), min) + 1;
    auto const dmax1 = std::distance(data.begin(), max) + 1;

    auto const dmin2 = std::distance(min, data.end());
    auto const dmax2 = std::distance(max, data.end());

    auto const s1 = std::max(dmin1, dmax1);
    auto const s2 = std::max(dmin2, dmax2);
    auto const s3 = dmin1 + dmax2;
    auto const s4 = dmax1 + dmin2;

    auto const s = std::min( std::min(s1, s2), std::min(s3, s4) );
    std::cout << s << '\n';
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
