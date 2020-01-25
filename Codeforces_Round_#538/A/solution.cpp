#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int x, y, z, a, b, c;
    std::cin >> x >> y >> z >> a >> b >> c;
    if (x > a)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }
    a -= x;
    int s = a + b;
    if (y > s)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }
    s -= y;
    s += c;
    if (z > s)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }

    std::cout << "YES" << std::endl;
    return 0;
}
