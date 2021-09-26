#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    auto const f0 = str.find('0') != std::string::npos;
    auto const f1 = str.find('1') != std::string::npos;

    if ((f0 && !f1) || (!f0 && f1))
    {
        std::cout << str << '\n';
    }
    else
    {
        std::string res;
        res.reserve(str.size() * 2);
        for(size_t i = 0; i < str.size(); i++)
        {
            res.append("01");
        }
        std::cout << res << '\n';
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
