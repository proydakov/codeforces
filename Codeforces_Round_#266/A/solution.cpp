#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; // всего поездок
    int m; // емкость абонемента
    int a; // цена поездки
    int b; // цена абонемента

    std::cin >> n;
    std::cin >> m;
    std::cin >> a;
    std::cin >> b;

    double ka = a;
    double kb = double(b) / m;

    int money = 0;

    if(kb < ka) {
        money += (n / m) * b;
        int money_a = (n % m) * a;
        int money_b = b;
        money += std::min(money_a, money_b);
    }
    else {
        money += a * n;
    }

    std::cout << money << std::endl;

    return 0;
}
