#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::int64_t> vec(n + 1);
    vec[0] = 0;
    for(size_t i = 1; i <= n; i++)
    {
        std::cin >> vec[i];
    }

    std::vector<std::int64_t> sor(vec);
    std::sort(sor.begin(), sor.end());

    std::vector<std::int64_t> vec_cache(n + 1, 0);
    std::vector<std::int64_t> sor_cache(n + 1, 0);

    for(size_t i = 1; i <= n; i++)
    {
        vec_cache[i] = vec[i] + vec_cache[i - 1];
        sor_cache[i] = sor[i] + sor_cache[i - 1];
    }

    size_t k;
    std::cin >> k;
    for(size_t i = 0; i < k; i++)
    {
        size_t t, l, r;
        std::cin >> t >> l >> r;
        switch(t)
        {
            case 1:
            {
                std::cout << (vec_cache[r] - vec_cache[l - 1]) << '\n';
            }
                break;

            case 2:
            {
                std::cout << (sor_cache[r] - sor_cache[l - 1]) << '\n';
            }
                break;
        }
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
