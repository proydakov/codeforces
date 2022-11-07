#include <limits>
#include <vector>
#include <cstdint>
#include <iostream>
#include <optional>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());

    if (vec.size() == 2)
    {
        std::cout << vec[0] << ' ' << vec[1] << '\n';
    }
    else
    {
        size_t index{};
        std::int64_t min{std::numeric_limits<std::int64_t>::max()};

        for(size_t i = 1; i < n; i++)
        {
            int64_t delta = vec[i] - vec[i - 1];
            if (delta < min)
            {
                min = delta;
                index = i;
            }
        }

        for(size_t i = index; i < n; i++)
        {
            std::cout << vec[i] << ' ';
        }

        for(size_t i = 0; i < index; i++)
        {
            std::cout << vec[i] << ' ';
        }

        std::cout << '\n';
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
