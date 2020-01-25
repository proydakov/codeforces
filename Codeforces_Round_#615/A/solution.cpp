#include <array>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        std::array<int, 3> array{};
        int n;
        std::cin >> array[0];
        std::cin >> array[1];
        std::cin >> array[2];
        std::cin >> n;

        std::sort(array.begin(), array.end());

        auto const res = array[0] + array[1] + array[2] + n;
        auto const d1 = array[2] - array[0];
        auto const d2 = array[2] - array[1];
        if (res % 3 == 0 and n >= d1 + d2)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
