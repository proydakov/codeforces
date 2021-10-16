#include <map>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, k;
    std::cin >> n >> k;

    std::map<size_t, size_t> map;
    for(size_t i = 1; i <= n; i++)
    {
        size_t k;
        std::cin >> k;

        map.insert(std::make_pair(k, i));
    }

    if (map.size() < k)
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
        size_t t{};
        for(auto const [_, v] : map)
        {
            t++;
            std::cout << v << ' ';
            if (t == k)
            {
                break;
            }
        }
        std::cout << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
