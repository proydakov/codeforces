#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int m;
    int n;

    std::cin >> m;
    std::cin >> n;

    int s = m * n;
    int half_s = s / 2;

    std::cout << half_s << std::endl;

    return 0;
}
