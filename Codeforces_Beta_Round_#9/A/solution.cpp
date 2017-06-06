#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b;
    std::cin >> a;
    std::cin >> b;

    int m = std::max(a, b);
    m--;

    int delta = 6 - m;

    if(6 == delta) {
        std::cout << "1/1" << std::endl;
    }
    else if(5 == delta) {
        std::cout << "5/6" << std::endl;
    }
    else if(4 == delta) {
        std::cout << "2/3" << std::endl;
    }
    else if(3 == delta) {
        std::cout << "1/2" << std::endl;
    }
    else if(2 == delta) {
        std::cout << "1/3" << std::endl;
    }
    else if(1 == delta) {
        std::cout << "1/6" << std::endl;
    }

    return 0;
}
