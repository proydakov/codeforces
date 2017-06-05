#include <cstdint>
#include <iostream>

int main()
{
    int64_t a; int64_t b; int64_t c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int64_t val = (b - a);
    if(0 == val) {
        std::cout << "YES" << std::endl;
        return 0;
    }

    if( (val < 0 && c > 0) || (val > 0 && c < 0) || (0 == c) ) {
        std::cout << "NO" << std::endl;
        return 0;
    }

    val %= c;
    if(0 == val) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
