#include <iostream>
#include <algorithm>

int main()
{
    size_t a;
    size_t b;

    std::cin >> a;
    std::cin >> b;

    size_t min = std::min(a, b);

    size_t solution = 1;
    for(size_t i = 1; i <= min; i++) {
        solution *= i;
    }

    std::cout << solution << std::endl;

    return 0;
}
