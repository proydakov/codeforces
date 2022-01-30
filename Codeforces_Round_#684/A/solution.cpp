#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::int64_t c0, c1, h;

    std::cin >> n;
    std::cin >> c0 >> c1 >> h;

    std::string word;
    std::cin >> word;

    auto const calc = [&word](const char expensive, std::int64_t c, std::int64_t h)
    {
        std::int64_t val{};
        for(auto const w : word)
        {
            val += c;
            if (w == expensive)
            {
                val += h;
            }
        }
        return val;
    };

    std::int64_t res{};
    if (c0 > c1 && (c0 - c1) > h)
    {
        res = calc('0', c1, h);
    }
    else if(c1 > c0 && (c1 - c0) > h)
    {
        res = calc('1', c0, h);
    }
    else
    {
        for(auto const w : word)
        {
            if ('0' == w)
            {
                res += c0;
            }
            else
            {
                res += c1;
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
