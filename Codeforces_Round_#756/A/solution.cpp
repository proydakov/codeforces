#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string n;
    std::cin >> n;

    auto const is = [](auto const e)
    {
        return e == '2' || e == '4' || e == '6' || e == '8';
    };

    auto const t = n.front();
    auto const b = n.back();
    if (is(b))
    {
        std::cout << "0\n";
    }
    else if(is(t))
    {
        std::cout << "1\n";
    }
    else if(std::any_of(n.begin(), n.end(), is))
    {
        std::cout << "2\n";
    }
    else
    {
        std::cout << "-1\n";
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
