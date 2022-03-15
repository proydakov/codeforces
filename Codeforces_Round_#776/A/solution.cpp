#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    std::string str;
    char c;

    std::cin >> str >> c;
    bool yes = false;
    for(size_t i = 0; i < str.size(); i++)
    {
        auto const v = str[i];
        if (v == c && i % 2 == 0)
        {
            yes = true;
        }
    }

    if (yes)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
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
