#include <vector>
#include <cstdint>
#include <numeric>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t s;
    std::cin >> s;

    std::vector<int64_t> data(s);
    for(size_t i = 0; i < s; i++)
    {
        std::cin >> data[i];
    }

    auto const total = std::accumulate(data.begin(), data.end(), int64_t(0));
    if (total % s != 0)
    {
        std::cout << "-1\n";
    }
    else
    {
        int64_t const val = total / s;
        auto const res = std::count_if(data.begin(), data.end(), [val](auto const v){
            return v > val;
        });
        std::cout << res << "\n";
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
