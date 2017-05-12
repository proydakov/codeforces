#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n, k, l, c, d, p, nl, np;
    std::cin >> n;
    std::cin >> k;
    std::cin >> l;
    std::cin >> c;
    std::cin >> d;
    std::cin >> p;
    std::cin >> nl;
    std::cin >> np;

    int c1 = k * l / nl;
    int c2 = c * d;
    int c3 = p / np;

    int min = std::min(std::min(c1, c2), c3);
    std::cout << (min / n) << std::endl;

    return 0;
}
