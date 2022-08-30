#include <set>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, t;
    std::cin >> n >> t;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::set<int64_t> set;
    for(size_t i = 1; i <= t; i++)
    {
        set.insert(i);
    }

    for(size_t i = 0; i < t; i++)
    {
        auto const e = vec[i];
        set.erase(e);
    }

    std::cout << set.size() << '\n';
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
