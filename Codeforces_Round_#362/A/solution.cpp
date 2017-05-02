#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int t; int s; int x;

    std::cin >> t;
    std::cin >> s;
    std::cin >> x;

    int val = x - t;
    int ost = val % s;

    if((0 == ost && x >= t) || (1 == ost && x > t + s) ) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
