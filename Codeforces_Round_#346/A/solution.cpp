#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int a; int b;
    std::cin >> n;
    std::cin >> a;
    std::cin >> b;

    if(b == 0) {
        std::cout << a << std::endl;
    }
    else if(b > 0) {
        int index = a + b;
        index = index % n;
        if(index == 0) {
            index = n;
        }
        std::cout << index << std::endl;
    }
    else {
        int index = a + b;
        index = index % n;
        if(index == 0) {
            index = n;
        }
        else if(index < 0) {
            index += n;
        }
        std::cout << index << std::endl;
    }

    return 0;
}
