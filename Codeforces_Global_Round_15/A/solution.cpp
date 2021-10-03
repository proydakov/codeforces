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

    std::string copy(str);
    std::sort(copy.begin(), copy.end());

    size_t res = 0;
    for(size_t i = 0; i < n; i++)
    {
        if (str[i] != copy[i])
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
