#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

bool isValidSymbol(char c)
{
    return c == 'Y' || c == 'e' || c == 's';
}

bool isValidPair(char c, char n)
{
    if (c == 'Y' && n == 'e')
    {
        return true;
    }

    if (c == 'e' && n == 's')
    {
        return true;
    }

    if (c == 's' && n == 'Y')
    {
        return true;
    }

    return false;
}

void solve()
{
    std::string str;
    std::cin >> str;

    if (str.size() == 1)
    {
        if (isValidSymbol(str.front()))
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
        return;
    }
    else
    {
        for(size_t i = 0; i < str.size() - 1; i++)
        {
            auto const c = str[i];
            auto const n = str[i + 1];
            if (!isValidSymbol(c) || !isValidPair(c, n))
            {
                std::cout << "NO\n";
                return;
            }
        }
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
