#include <cstdint>
#include <iostream>

void solve()
{
    size_t k;
    std::cin >> k;

    size_t i = 0;
    while(k > 0)
    {
        i++;

        if (i % 3 == 0 || i % 10 == 3)
        {
            // pass
        }
        else
        {
            k--;
        }
    }

    std::cout << i << '\n';
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
