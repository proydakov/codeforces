#include <iostream>

int main()
{
    int a; int b;

    std::cin >> a;
    std::cin >> b;

    if(a < b) {
        std::swap(a, b);
    }

    int counter = 0;
    while( (a >= 2 && b >= 1) ) {
        a -= 2;
        b += 1;
        if(a < b) {
            std::swap(a, b);
        }
        counter++;
    }
    std::cout << counter << std::endl;

    return 0;
}
