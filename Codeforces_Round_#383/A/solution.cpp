#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int val = 1;
    if(n == 0) {
        goto mark;
    }

    n = n % 4;

    switch(n) {
        case 0:
            val = 6;
            break;

        case 1:
            val = 8;
            break;

        case 2:
            val = 4;
            break;

        case 3:
            val = 2;
            break;
    }

mark:
    std::cout << val << std::endl;

    return 0;
}
