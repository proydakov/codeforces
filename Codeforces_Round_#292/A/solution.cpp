#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b; int s;
    std::cin >> a;
    std::cin >> b;
    std::cin >> s;

    a = std::abs(a);
    b = std::abs(b);

    int steps = a - s + b;

    if(steps <= 0 && steps % 2 == 0) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
