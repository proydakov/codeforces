#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    auto const origin_size = str.size();

    if (1 == origin_size)
    {
        std::cout << str << '\n';
    }
    else if(2 == origin_size)
    {
        std::cout << str.back() << '\n';
    }
    else
    {
        auto const it = std::min_element(str.begin(), str.end());
        std::cout << *it << '\n';
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
