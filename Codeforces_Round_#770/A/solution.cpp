#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

bool is_palindrom(std::string const& str)
{
    for(size_t i1 = 0, i2 = str.size() - 1; i1 < i2; i1++, i2--)
    {
        if (str[i1] != str[i2])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    size_t n, k;
    std::cin >> n >> k;

    std::string str;
    std::cin >> str;

    if (k < 1)
    {
        std::cout << "1\n";
    }
    else
    {
        bool const is = is_palindrom(str);
        std::cout << (is ? "1\n" : "2\n");
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
