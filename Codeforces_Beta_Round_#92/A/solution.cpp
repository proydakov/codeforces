#include <cmath>
#include <iostream>

int main()
{
    int n; int a; int b;
    std::cin >> n;
    std::cin >> a;
    std::cin >> b;

    std::cout << (n - std::max(a + 1, n - b) + 1) << std::endl;

    return 0;
}
