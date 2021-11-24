#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, k;
    std::cin >> n >> k;    

    size_t t = 0;

    while(true)
    {
        for(auto const e : {'a', 'b', 'c'})
        {
            for(size_t i = 0; i < k; i++)
            {
                std::cout << e;
                t++;

                if (t == n)
                {
                    std::cout << '\n';
                    return;
                }
            }
        }
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
