#include <cmath>
#include <limits>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int min = std::numeric_limits<int>::max();

    int money = 0;

    for(int i = 0; i < n; i++) {
        int a; int p;
        std::cin >> a;
        std::cin >> p;

        min = std::min(min, p);

        money += min * a;
    }

    std::cout << money << std::endl;

    return 0;
}
