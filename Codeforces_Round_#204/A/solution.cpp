#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    size_t c0{};
    size_t c5{};

    for(size_t i = 0; i < n; i++)
    {
        size_t k;
        std::cin >> k;

        if (0 == k)
        {
            c0++;
        }
        else if(5 == k)
        {
            c5++;
        }
    }

    if (c0 < 1)
    {
        std::cout << "-1\n";
    }
    else if (c5 < 9)
    {
        std::cout << "0\n";
    }
    else
    {
        size_t const c_sub = c5 / 9;
        for(size_t i = 0; i < c_sub * 9; i++)
        {
            std::cout << 5;
        }

        for(size_t i = 0; i < c0; i++)
        {
            std::cout << 0;
        }

        std::cout << "\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
