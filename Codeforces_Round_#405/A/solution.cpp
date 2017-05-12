#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b;
    std::cin >> a;
    std::cin >> b;

    int i = 0;
    for(; a <= b ; i++) {
        a *= 3;
        b *= 2;
    }
    std::cout << i << std::endl;

    return 0;
}
