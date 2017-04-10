#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n1; int n2;
    int k1; int k2;

    std::cin >> n1;
    std::cin >> n2;

    std::cin >> k1;
    std::cin >> k2;

    if(n1 > n2) {
        std::cout << "First" << std::endl;
    }
    else {
        std::cout << "Second" << std::endl;
    }

    return 0;
}
