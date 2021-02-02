#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int t1, t2;
    t1 = 0;
    t2 = 0;

    for (int i = 0; i < n; i++)
    {
        int v;
        std::cin >> v;
        if (v == 1)
        {
            t1++;
        }
        else
        {
            t2++;
        }
    }

    if (t2 % 2 == 1)
    {
        if (t1 < 2)
        {
            std::cout << "NO\n";
            return;
        }
        t1 -= 2;
    }

    if (t1 % 2 == 0)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
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
