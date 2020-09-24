#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string text;
    std::cin >> text;

    size_t c0{};
    size_t c1{};

    for(const auto c : text)
    {
        if ('0' == c)
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }

    size_t const c = std::min(c0, c1);
    if (c % 2 == 1)
    {
        std::cout << "DA\n";
    }
    else
    {
        std::cout << "NET\n";
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
