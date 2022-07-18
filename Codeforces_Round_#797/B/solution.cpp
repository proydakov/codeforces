#include <vector>
#include <cstdint>
#include <optional>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> veca(n);
    for(auto& e : veca) std::cin >> e;

    bool allbzero{true};
    std::vector<int64_t> vecb(n);
    for(auto& e : vecb)
    {
        std::cin >> e;
        if (e != 0)
        {
            allbzero = false;
        }
    }

    std::optional<int64_t> delta{};
    for(size_t i = 0; i < n; i++)
    {
        auto const tdelta = veca[i] - vecb[i];
        if (veca[i] > 0 && vecb[i] > 0 && tdelta >= 0)
        {
            delta = tdelta;
            break;
        }
    }

    if (allbzero)
    {
        std::cout << "YES\n";
    }
    else if(delta)
    {
        auto const d = *delta;

        bool res{true};
        for(size_t i = 0; i < n; i++)
        {
            auto const v = veca[i] - vecb[i];
            if (vecb[i] > 0)
            {
                if (v != d)
                {
                    res = false;
                    break;
                }
            }
            else
            {
                if (v <= d)
                {
                    // pass
                }
                else
                {
                    res = false;
                }
            }
        }

        std::cout << (res ? "YES\n" : "NO\n");
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
