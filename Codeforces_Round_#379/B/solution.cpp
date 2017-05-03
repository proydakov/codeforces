#include <cmath>
#include <array>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int, 10> array;
    array.fill(0);

    std::cin >> array[2];
    std::cin >> array[3];
    std::cin >> array[5];
    std::cin >> array[6];

    int sum = 0;

    int min = std::min(array[2], std::min(array[5], array[6]));
    sum += min * 256;

    array[2] -= min;
    array[5] -= min;
    array[6] -= min;

    min = std::min(array[2], array[3]);
    sum += min * 32;

    std::cout << sum << std::endl;

    return 0;
}
