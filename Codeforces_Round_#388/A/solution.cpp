#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int val = n / 2;
    std::cout << val << std::endl;

    int ost = n % 2;
    if(ost == 1) {
        val--;
    }
    for(int i = 0; i < val; i++) {
        std::cout << 2 << ' ';
    }
    if(ost) {
        std::cout << 3;
    }
    std::cout << std::endl;

    return 0;
}
