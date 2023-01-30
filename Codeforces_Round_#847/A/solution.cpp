#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

std::string const etalon("314159265358979323846264338327");

void solve()
{
    std::string value;
    std::cin >> value;

    int64_t res{};
    for(size_t i = 0; i < std::min(etalon.size(), value.size()); i++)
    {
        if (value[i] != etalon[i])
        {
            break;
        }
        else
        {
            res++;
        }
    }

    std::cout << res << '\n';
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
