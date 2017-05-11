#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int full = n / 7;
    int dest = n % 7;

    int min = full * 2;

    if(dest == 6) {
        min++;
    }

    int max = full * 2 + std::min(dest, 2);

    std::cout << min << ' ' << max << std::endl;

    return 0;
}
