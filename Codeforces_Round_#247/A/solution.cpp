#include <array>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<uint32_t, 8> cost;
    cost.fill(0);

    std::cin >> cost[1];
    std::cin >> cost[2];
    std::cin >> cost[3];
    std::cin >> cost[4];

    uint32_t acc = 0;

    char c = '0';
    while(true) {
        c = ' ';
        std::cin >> c;

        if(c == ' ') {
            break;
        }

        auto val = (uint32_t)(c - '0');
        acc += cost[val];
    }
    std::cout << acc << std::endl;

    return 0;
}
