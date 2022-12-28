#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::unordered_map<int64_t, int64_t> vmap(n);
    std::unordered_map<int64_t, int64_t> pmap(n);

    int64_t c1 = 1;
    for(auto const e : vec)
    {
        auto it = vmap.find(e);
        if (it == vmap.end())
        {
            vmap[e] = c1;
        }
        c1++;
    }

    int64_t c2 = 1;
    for(auto rit = vec.rbegin(); rit != vec.rend(); ++rit)
    {
        auto const e = *rit;
        auto it = pmap.find(e);
        if (it == pmap.end())
        {
            pmap[e] = c2;
        }
        c2++;
    }

    size_t q;
    std::cin >> q;

    int64_t vr{};
    int64_t pr{};
    for(size_t i = 0; i < q; i++)
    {
        int64_t v;
        std::cin >> v;

        vr += vmap[v];
        pr += pmap[v];
    }

    std::cout << vr << ' ' << pr << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    {
        solve();
    }

    return 0;
}
