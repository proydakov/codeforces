#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    int64_t suffix0{};
    int64_t suffix1{};

    for(auto const c : str)
    {
        if ('0' == c)
        {
            suffix0++;
        }
        else
        {
            suffix1++;
        }
    }

    auto res = std::min(suffix0, suffix1);

    int64_t prefix0{};
    int64_t prefix1{};

    for(auto const c : str)
    {
        if ('0' == c)
        {
            prefix0++;
            suffix0--;
        }
        else
        {
            prefix1++;
            suffix1--;
        }

        // cost 0 * 1 *
        res = std::min(res, prefix1 + suffix0);

        // cost 1 * 0 *
        res = std::min(res, prefix0 + suffix1);
    }

    std::cout << res << "\n";
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
