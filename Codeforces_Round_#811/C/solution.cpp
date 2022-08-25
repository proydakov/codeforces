#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t s;
    std::cin >> s;

    std::string str;

    for(int64_t i = 9; i > 0 && s > 0; i--)
    {
        if (s >= i)
        {
            str.append(std::to_string(i));
            s -= i;
        }
        else
        {
            str.append(std::to_string(s));
            break;
        }
    }

    std::reverse(str.begin(), str.end());

    std::cout << str << '\n';
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
