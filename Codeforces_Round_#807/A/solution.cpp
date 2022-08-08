#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    int64_t x;
    std::cin >> n >> x;

    std::vector<int64_t> vec(n * 2);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());

    bool res = true;
    for(size_t i = 0; i < n; i++)
    {
        auto const v1 = vec[i];
        auto const v2 = vec[i + n];

        if (v2 - v1 < x)
        {
            res = false;
            break;
        }
    }

    std::cout << (res ? "YES\n" : "NO\n");
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
