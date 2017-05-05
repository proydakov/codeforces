#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int x1; int y1; int x2; int y2;
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> x2;
    std::cin >> y2;

    const int dx = std::abs(x1 - x2);
    const int dy = std::abs(y1 - y2);

    if((dx > 0 && dy > 0 && dx != dy) || (dx == 0 && dy == 0)) {
        std::cout << -1 << std::endl;
    }
    else if (x1 == x2) {
        std::cout << x1 + dy << ' ' << y1
                  << ' '
                  << x2 + dy << ' ' << y2
                  << std::endl;
    }
    else if (y1 == y2) {
        std::cout << x1 << ' ' << y1 + dx
                  << ' '
                  << x2 << ' ' << y2 + dx
                  << std::endl;
    }
    else {
        std::cout << x1 << ' ' << y2
                  << ' '
                  << x2 << ' ' << y1
                  << std::endl;
    }
    return 0;
}
