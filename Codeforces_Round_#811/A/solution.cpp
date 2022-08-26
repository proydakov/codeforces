#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    int64_t H, M;
    std::cin >> H >> M;

    std::vector<std::pair<int64_t, int64_t>> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i].first >> vec[i].second;
    }

    std::sort(vec.begin(), vec.end());
    int64_t const T = H * 60 + M;

    size_t i = 0;
    for(; i < n; i++)
    {
        int64_t const t = vec[i].first * 60 + vec[i].second;
        if (T <= t)
        {
            break;
        }
    }
    if (i == vec.size())
    {
        i = 0;
    }
    int64_t const t = vec[i].first * 60 + vec[i].second;

    int64_t D = t - T;
    if (D < 0)
    {
        D += 24 * 60;
    }
    std::cout << (D / 60) << ' ' << (D % 60) << '\n';
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
