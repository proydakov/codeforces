#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b;
    std::cin >> a;
    std::cin >> b;

    int total = 0;
    int buffer = 0;

    while(a) {
        total += a;
        buffer += a;
        a = buffer / b;
        buffer -= a * b;
    }

    std::cout << total << std::endl;

    return 0;
}
