#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a, b, c, d, k;
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        std::cin >> d;
        std::cin >> k;

        int ac = a / c;
        if (a % c > 0)
        {
            ac++;
        }

        int bd = b / d;
        if (b % d > 0)
        {
            bd++;
        }

        if (ac + bd <= k)
        {
            std::cout << ac << ' ' << bd << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }

    return 0;
}
