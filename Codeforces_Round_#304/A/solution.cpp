#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int k, n, w;

    std::cin >> k;
    std::cin >> n;
    std::cin >> w;

    int delta = n - k * w * (w + 1) / 2;

    if(delta < 0) {
        delta = -delta;
    }
    else {
        delta = 0;
    }

    std::cout << delta << std::endl;

    return 0;
}
