#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    uint64_t n; uint64_t k;
    std::cin >> n;
    std::cin >> k;

    uint64_t diff = n / k;
    uint64_t ost = n % k;

    if(diff % 2 == 0) {
        std::cout << "NO" << std::endl;
    }
    else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}
