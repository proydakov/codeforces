#include <cmath>
#include <iostream>

int main()
{
    int a; int b; int c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    a = a;
    b = b / 2;
    c = c / 4;

    int min = std::min(a, std::min(b, c));
    int sum = min * 1 + min * 2 + min * 4;
    std::cout << sum << std::endl;

    return 0;
}
