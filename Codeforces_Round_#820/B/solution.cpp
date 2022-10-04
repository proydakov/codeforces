#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t size;
    std::cin >> size;

    std::string num;
    std::cin >> num;

    std::string str;
    while(not num.empty())
    {
        if (num.back() == '0')
        {
            num.pop_back();

            int v = num.back() - '0';
            num.pop_back();

            v += (num.back() - '0') * 10;
            num.pop_back();

            str.push_back('a' + v - 1);
        }
        else
        {
            auto v = num.back();
            num.pop_back();

            str.push_back('a' - '1' + v);
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
