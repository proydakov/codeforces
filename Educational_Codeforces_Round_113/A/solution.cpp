#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    auto const ab_index = str.find("ab");
    auto const ba_index = str.find("ba");

    if(ab_index == std::string::npos && ba_index == std::string::npos)
    {
        std::cout << "-1 -1\n";
    }
    else if(ab_index != std::string::npos)
    {
        std::cout << (ab_index + 1) << ' ' << (ab_index + 2) << '\n';
    }
    else
    {
        std::cout << (ba_index + 1) << ' ' << (ba_index + 2) << '\n';
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
