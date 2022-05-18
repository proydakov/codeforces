#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string x1, x2;
    int64_t p1, p2;

    std::cin >> x1 >> p1 >> x2 >> p2;

    int64_t const l1 = x1.size() + p1;
    int64_t const l2 = x2.size() + p2;

    if (l1 > l2)
    {
        std::cout << ">\n";
    }
    else if (l1 < l2)
    {
        std::cout << "<\n";
    }
    else
    {
        auto const s = std::max(x1.size(), x2.size());
        while(x1.size() != s)
        {
            x1.push_back('0');
        }

        while(x2.size() != s)
        {
            x2.push_back('0');
        }

        if (x1 > x2)
        {
            std::cout << ">\n";
        }
        else if(x1 < x2)
        {
            std::cout << "<\n";
        }
        else
        {
            std::cout << "=\n";
        }
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
