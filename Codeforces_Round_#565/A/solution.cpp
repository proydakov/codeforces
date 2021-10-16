#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::uint64_t n;
    std::cin >> n;

    size_t res{};
    while(n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            res++;
        }
        else if(n % 3 == 0)
        {
            n /= 3;
            n *= 2;
            res++;
        }
        else if(n % 5 == 0)
        {
            n /= 5;
            n *= 4;
            res++;
        }
        else
        {
            std::cout << "-1\n";
            return;
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
