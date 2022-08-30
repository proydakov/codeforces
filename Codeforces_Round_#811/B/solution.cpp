#include <set>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::size_t n;
    std::cin >> n;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::set<int64_t> set;
    size_t res{};
    for(auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        auto const e = *it;
        auto const [_, cond] = set.insert(e);
        if (cond)
        {
            res++;
        }
        else
        {
            break;
        }
    }

    std::cout << (n - res) << '\n';
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
