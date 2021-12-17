#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::vector<int> vec(7);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());

    auto const s2 = vec[0] + vec[1];

    for(size_t i = 2; i < vec.size(); i++)
    {
        auto const t = vec[i];
        if (s2 + t == vec.back())
        {
            std::cout << vec[0] << ' ' << vec[1] << ' ' << t << '\n';
            return;
        }
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
