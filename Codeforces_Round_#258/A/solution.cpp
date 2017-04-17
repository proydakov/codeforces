#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    int min = std::min(n, m);

    if(min % 2 == 0) {
        std::cout << "Malvika" << std::endl;
    }
    else {
        std::cout << "Akshat" << std::endl;
    }

    return 0;
}
