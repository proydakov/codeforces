#include <array>
#include <numeric>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int, 5> array;
    array.fill(0);

    for(int i = 0; i < 5; i++) {
        std::cin >> array[i];
    }

    int summ = std::accumulate(array.begin(), array.end(), 0);

    std::cout << (summ % 5 == 0 && summ > 0 ? summ / 5 : -1) << std::endl;

    return 0;
}
