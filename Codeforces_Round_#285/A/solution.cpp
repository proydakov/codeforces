#include <cmath>
#include <iostream>

int calc(int p, int t)
{
    return std::max(3 * p / 10, p - p / 250 * t);
}

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b; int c; int d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    const int mscore = calc(a, c);
    const int vscore = calc(b, d);

    if(mscore > vscore) {
        std::cout << "Misha" << std::endl;
    }
    else if(vscore > mscore) {
        std::cout << "Vasya" << std::endl;
    }
    else {
        std::cout << "Tie" << std::endl;
    }

    return 0;
}
