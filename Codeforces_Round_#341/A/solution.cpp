#include <limits>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    uint64_t acc = 0;
    uint64_t min = std::numeric_limits<uint64_t>::max();
    for(int i = 0; i < n; i++) {
        uint64_t temp;
        std::cin >> temp;
        acc += temp;
        if(temp % 2 == 1 && temp < min) {
            min = temp;
        }
    }

    if(acc % 2 == 1) {
        acc -= min;
    }
    std::cout << acc << std::endl;

    return 0;
}
