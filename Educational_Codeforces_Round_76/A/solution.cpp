#include <cmath>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n, x, a, b;
        std::cin >> n;
        std::cin >> x;
        std::cin >> a;
        std::cin >> b;

        std::cout << std::min(std::abs(a - b) + x, n - 1) << std::endl;
    }

    return 0;
}
