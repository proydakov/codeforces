#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t r; int64_t g; int64_t b;
    std::cin >> r;
    std::cin >> g;
    std::cin >> b;

    int64_t max = std::max(r, std::max(g, b));
    int64_t sum = r + g + b;

    if(max > (sum - max) * 2) {
        std::cout << (sum - max) << std::endl;
    }
    else {
        std::cout << (sum / 3) << std::endl;
    }

    return 0;
}
