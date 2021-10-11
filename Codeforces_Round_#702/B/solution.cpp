#include <string>
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

    int ost[3] = {};

    for(auto const e : vec)
    {
        auto const index = e % 3;
        ost[index]++;
    }

    int const mid = n / 3;
    int total{};
    for(auto const oindex : {0, 1, 2})
    {
        if (ost[oindex] > mid)
        {
            int delta = ost[oindex] - mid;
            for(auto const c : {1, 2})
            {
                auto const dindex = (oindex + c) % 3;
                auto const e = ost[dindex];
                if (e < mid)
                {
                    int const shift = std::min(delta, mid - e);
                    delta -= shift;
                    ost[oindex] -= shift;
                    ost[dindex] += shift;
                    total += shift * c;
                }
            }
        }
    }
    std::cout << total << '\n'; 
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
