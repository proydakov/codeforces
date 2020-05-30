#include <cstdint>
#include <iostream>

void solve()
{
    int c00, c01, c11;
    std::cin >> c00 >> c01 >> c11;

    bool inited = false;

    if (c11 > 0)
    {
        inited = true;
        for(int i = 0; i <= c11; i++)
        {
            std::cout << '1';
        }
    }

    if (c01 > 0)
    {
        if (!inited)
        {
            inited = true;
            std::cout << '1' << '0';
        }
        else
        {
            std::cout << '0';
        }
        c01--;
    }

    if (c00 > 0)
    {
        if (!inited)
        {
            std::cout << '0';
        }
        for(int i = 0; i < c00; i++)
        {
            std::cout << '0';
        }
    }

    if (c01 > 0)
    {
        int next = 1;
        for(int i = 0; i < c01; i++)
        {
            std::cout << next;
            next++;
            next &= 1;
        }
    }

    std::cout << "\n";
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
