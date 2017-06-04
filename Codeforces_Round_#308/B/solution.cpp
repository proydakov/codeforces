#include <cmath>
#include <cstdint>
#include <iostream>

int main()
{
    uint64_t n;
    std::cin >> n;

    uint64_t result = 0;
    if(n == 1000000000) {
        result = 10 * (n + 1) - uint64_t(1111111111);
    }
    else if(n >= std::pow(10, 8)) {
        result = 9 * (n + 1) - 111111111;
    }
    else if(n >= std::pow(10, 7)) {
        result = 8 * (n + 1) - 11111111;
    }
    else if(n >= std::pow(10, 6)) {
        result = 7 * (n + 1) - 1111111;
    }
    else if(n >= std::pow(10, 5)) {
        result = 6 * (n + 1) - 111111;
    }
    else if(n >= std::pow(10, 4)) {
        result = 5 * (n + 1) - 11111;
    }
    else if(n >= std::pow(10, 3)) {
        result = 4 * (n + 1) - 1111;
    }
    else if(n >= std::pow(10, 2)) {
        result = 3 * (n + 1) - 111;
    }
    else if(n >= std::pow(10, 1)) {
        result = 2 * (n + 1) - 11;
    }
    else {
        result = 1 * (n + 1) - 1;
    }
    std::cout << result << std::endl;

    return 0;
}
