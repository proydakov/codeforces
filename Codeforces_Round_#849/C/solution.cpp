#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    auto itb = str.begin();
    auto ite = str.end() - 1;

    while(itb < ite)
    {
        if (*itb == '0' && *ite == '1')
        {
            itb++;
            ite--;
        }
        else if (*itb == '1' && *ite == '0')
        {
            itb++;
            ite--;
        }
        else
        {
            break;
        }
    }

    std::cout << (1 + std::distance(itb, ite)) << '\n';
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
