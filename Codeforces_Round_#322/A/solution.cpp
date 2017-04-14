#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b;
    std::cin >> a;
    std::cin >> b;

    int min = std::min(a, b);

    a -= min;
    b -= min;

    std::cout << min << ' ' << (a + b) / 2 << std::endl;

    return 0;
}
