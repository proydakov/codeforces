#include <map>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::map<std::int64_t, size_t> map;
    for(size_t i = 0; i < n; i++)
    {
        std::int64_t val;
        std::cin >> val;

        map[std::abs(val)]++;
    }

    size_t res{};
    for(auto const& [k, v] : map)
    {
        if (v == 1 || k == 0)
        {
            res++;
        }
        else
        {
            res += 2;
        }
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
