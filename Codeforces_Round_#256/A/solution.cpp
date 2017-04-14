#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a1, a2, a3;
    int b1, b2, b3;

    int n;

    std::cin >> a1;
    std::cin >> a2;
    std::cin >> a3;

    std::cin >> b1;
    std::cin >> b2;
    std::cin >> b3;

    std::cin >> n;

    int a = a1 + a2 + a3;
    int ca = (a / 5) + (a % 5 > 0 ? 1 : 0);

    int b = b1 + b2 + b3;
    int cb = (b / 10) + (b % 10 > 0 ? 1 : 0);

    if(ca + cb <= n) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
