#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string const str("codeforces");

    char c;
    std::cin >> c;

    auto const p = str.find(c);
    if (p == std::string::npos)
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
