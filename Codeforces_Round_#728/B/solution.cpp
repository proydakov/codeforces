#include <map>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::map<int64_t, int64_t> map;
    std::vector<int64_t> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        int64_t e;
        std::cin >> e;
        vec[i] = e;
        map[e] = i + 1;
    }

    int64_t res{};

    for(size_t k = 0; k < n; k++)
    {
        auto const ai = vec[k];
        int64_t const i = k + 1;
        for(auto const [aj, j] : map)
        {
            auto const pow = aj * ai;
            if (pow > (2 * static_cast<int64_t>(n)))
            {
                break;
            }
            if (i < j && (ai * aj) == (i + j))
            {
                res++;
            }
        }
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
