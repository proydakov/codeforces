#include <set>
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

    std::set<int> set;
    std::vector<int> iii;

    for(auto it = vec.rbegin(); it != vec.rend(); ++it)
    {
        auto const v = *it;
        auto const [_, res] = set.insert(v);
        if (res)
        {
            iii.push_back(v);
        }
    }

    std::cout << iii.size() << '\n';
    for(auto it = iii.rbegin(); it != iii.rend(); ++it)
    {
        std::cout << *it << ' ';
    }

    std::cout << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
