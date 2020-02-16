#include <cmath>
#include <vector>
#include <cstdint>
#include <iostream>

struct visitor
{
    long t;
    long l;
    long h;
};

void solve()
{
    long n, t;
    std::cin >> n >> t;

    std::vector<visitor> data;
    data.reserve(n);

    for(long i = 0; i < n; i++)
    {
        visitor v{0, 0, 0};
        std::cin >> v.t >> v.l >> v.h;
        data.emplace_back(v);
    }

    visitor current{0, t, t};

    bool res = true;
    for(long i = 0; i < n; i++)
    {
        visitor const test = data[i];
        long const delta = test.t - current.t;
        current.l -= delta;
        current.h += delta;

        if (current.h < test.l || test.h < current.l)
        {
            res = false;
            break;
        }

        current.t = test.t;
        current.l = std::max(current.l, test.l);
        current.h = std::min(current.h, test.h);
    }
    std::cout << (res ? "YES" : "NO") << std::endl;
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
