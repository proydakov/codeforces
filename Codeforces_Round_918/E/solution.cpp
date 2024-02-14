#include <set>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int32_t> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
        if (i % 2 == 1)
        {
            vec[i] = -1 * vec[i];
        }
    }

    std::set<int64_t> hash;

    int64_t prefix{};
    for(size_t i = 0; i < n; i++)
    {
        prefix += static_cast<int64_t>(vec[i]);

        auto [_, res] = hash.insert(prefix);
        if (prefix == 0 || res == false)
        {
            std::cout << "YES\n";
            return;
        }
    }
    std::cout << "NO\n";
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
