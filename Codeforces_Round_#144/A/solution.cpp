#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    if (1 == n % 2)
    {
        std::cout << -1;
    }
    else if (n % 2 == 0)
    {
        for(int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                std::cout << (i + 1);
            }
            else
            {
                std::cout << (i - 1);
            }
            std::cout << ' ';
        }
    }
    std::cout << std::endl;

    return 0;
}
