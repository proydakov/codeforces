#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, k;
    std::cin >> n >> k;

    std::vector<int32_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    for(int i = 30; i >= 0 && k > 0; i--)
    {
        int32_t mask = 1 << i;
        size_t has{};
        for(auto e : vec)
        {
            if (e & mask)
            {
                has++;
            }
        }

        size_t need = n - has;
        if (need <= k)
        {
            k -= need;
            for(auto& e : vec)
            {
                e = e | mask;
            }
        }
    }

    int32_t res = vec.front();
    for(size_t i = 1; i < n; i++)
    {
        res = res & vec[i];
    }
    std::cout << res << '\n';
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
