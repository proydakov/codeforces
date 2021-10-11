#include <set>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, k;
    std::cin >> n >> k;

    std::set<int> set;

    for(size_t i = 0; i < n; i++)
    {
        int v;
        std::cin >> v;

        set.insert(v);
    }

    if (set.size() > k)
    {
        std::cout << "-1\n";
        return;
    }

    std::cout << k * n << '\n';
    for(size_t j = 0; j < n; j++)
    {
        for(size_t i = set.size(); i < k; i++)
        {
            std::cout << "1 ";
        }

        for(auto const k : set)
        {
            std::cout << k << ' ';
        }
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
