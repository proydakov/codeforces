#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t val;
    std::cin >> val;

    if(val % 2 == 0) {
        val /= 2;
    }
    else {
        val += 1;
        val *= -1;
        val /= 2;
    }

    std::cout << val << std::endl;

    return 0;
}
