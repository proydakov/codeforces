#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    if(n == 1)
    {
        std::cout << "9\n";
    }
    else
    {
        std::cout << "98";
        int current = 9;
        for(int i = 2; i < n; i++)
        {
            std::cout << current;
            current += 1;
            if (current > 9)
            {
                current = 0;
            }
        }
        std::cout << "\n";
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
