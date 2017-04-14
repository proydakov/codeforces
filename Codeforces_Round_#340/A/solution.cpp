#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int out = (n / 5) + (n % 5 > 0 ? 1 : 0);
    std::cout << out << std::endl;

    return 0;
}
