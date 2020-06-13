#include <cstdint>
#include <iostream>

void solve()
{
    int len;
    std::cin >> len;
    std::string number;
    std::cin >> number;

    auto index = number.find('8');
    if (index == std::string::npos || len - index < 11)
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
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
