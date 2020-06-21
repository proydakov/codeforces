#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int array[3];
    std::cin >> array[0] >> array[1] >> array[2];

    std::sort(array, array + 3);

    if (array[0] + array[1] > array[2])
    {
        std::cout << 0 << '\n';
    }
    else
    {
        std::cout << (array[2] - array[0] - array[1] + 1) << '\n';
    }

    return 0;
}
