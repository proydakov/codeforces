#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    if(m > n) {
        std::cout << -1 << std::endl;
        return 0;
    }

    int min = n / 2;
    if(n % 2 > 0) {
        min++;
    }

    while(min % m != 0) {
        min++;
    }

    std::cout << min << std::endl;

    return 0;
}
