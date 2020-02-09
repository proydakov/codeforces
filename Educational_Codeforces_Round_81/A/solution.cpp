#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;

        if (n == 2)
        {
            std::cout << 1 << '\n';
        }
        else if (n == 3)
        {
            std::cout << 7 << '\n';
        }
        else
        {
            if (n % 2 != 0)
            {
                std::cout << 7;
                n -= 3;
            }
            for(int j = 0; j < n / 2; j++)
            {
                std::cout << 1;
            }
            std::cout << '\n';
        }
    }

    return 0;
}
