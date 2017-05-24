#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b;
    std::cin >> a;
    std::cin >> b;

    if(a == 0 && b == 0) {
        std::cout << "NO" << std::endl;
        return 0;
    }

    int delta = std::abs(a - b);
    if(delta < 2) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
