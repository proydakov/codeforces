#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::vector<std::int64_t> vec(3);
    for(auto& e : vec) std::cin >> e;

    std::vector<std::int64_t> copy(vec);

    std::sort(vec.rbegin(), vec.rend());

    for(auto const e : copy)
    {
        auto delta = vec.front() - e;
        if (delta == 0)
        {
            if (vec[1] == e)
            {
                delta++;
            }
        }
        else
        {
            delta++;
        }

        std::cout << delta << ' ';
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
