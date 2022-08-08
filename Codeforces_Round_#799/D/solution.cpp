#include <set>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

bool is_palindrom(int64_t v1, int64_t v2)
{
    std::string s1 = std::to_string(v1);
    if (s1.size() == 1)
    {
        s1 = "0" + s1;
    }
    std::string s2 = std::to_string(v2);
    if (s2.size() == 1)
    {
        s2 = "0" + s2;
    }

    std::reverse(s2.begin(), s2.end());

    return s1 == s2;
}

void solve()
{
    char c;
    int64_t h, m, d;

    std::cin >> h >> c >> m >> d;
    std::set<std::pair<int64_t, int64_t>> set;

    size_t res{};
    auto pair = std::pair<int64_t, int64_t>(h, m);
    while(set.insert(pair).second)
    {
        if (is_palindrom(h, m))
        {
            res++;
        }

        m += d;
        auto const hd = m / 60;
        m = m % 60;
        
        h += hd;
        h = h % 24;

        pair = std::pair<int64_t, int64_t>(h, m);
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
