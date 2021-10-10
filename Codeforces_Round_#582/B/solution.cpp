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

    size_t total{};
    int min = vec.back();
    for(auto it = vec.rbegin(); it != vec.rend(); ++it)
    {
        auto const e = *it;

        if (e > min)
        {
            total++;
        }

        min = std::min(e, min);
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
