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

    size_t back{};
    for(auto it = str.rbegin(); it != str.rend(); ++it)
    {
        if (*it == ')')
        {
            back++;
        }
        else
        {
            break;
        }
    }

    if (back > n - back)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
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
