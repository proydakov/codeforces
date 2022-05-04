#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int32_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    bool a[2] = {true, true};
    bool b[2] = {true, true};

    for(size_t i = 0; i < n; i++)
    {
        auto const e = vec[i];

        if (i % 2 == 0)
        {
            auto const c1 = e % 2 == 0;
            auto const c2 = e % 2 == 1;

            a[0] = a[0] && c1;
            a[1] = a[1] && c2;
        }
        else
        {
            auto const c1 = e % 2 == 0;
            auto const c2 = e % 2 == 1;

            b[0] = b[0] && c1;
            b[1] = b[1] && c2;
        }
    }

    if ((a[0] || a[1]) && (b[0] || b[1]))
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
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
