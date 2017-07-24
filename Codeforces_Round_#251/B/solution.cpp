#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    uint64_t n; uint64_t x;
    std::cin >> n;
    std::cin >> x;

    std::vector<uint64_t> data(n, 0);
    for(uint64_t i = 0; i < n; i++) {
        std::cin >> data[i];
    }
    std::sort(data.begin(), data.end());

    uint64_t acc = 0;
    for(uint64_t i = 0; i < n; i++) {
        acc += data[i] * x;
        x--;
        x = std::max<uint64_t>(x, 1);
    }
    std::cout << acc << std::endl;

    return 0;
}
