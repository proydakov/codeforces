#include <cmath>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::size_t n;
    int a;
    std::cin >> n;
    std::cin >> a;

    if (n == 1)
    {
        std::cout << 0 << std::endl;
        return 0;
    }

    int array[n];
    for(std::size_t i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    std::sort(array, array + n);

    if (a <= array[0])
    {
        std::cout << (array[n - 2]) - a << std::endl;
    }
    else if (a >= array[n - 1])
    {
        std::cout << (a - array[1]) << std::endl;
    }
    else
    {
        int dist[4];
        dist[0] = std::abs(a - array[0]) + std::abs(array[n - 2] - array[0]);
        dist[1] = std::abs(a - array[1]) + std::abs(array[n - 1] - array[1]);
        dist[2] = std::abs(array[n - 2] - a) + std::abs(array[n - 2] - array[0]);
        dist[3] = std::abs(array[n - 1] - a) + std::abs(array[n - 1] - array[1]);

        std::sort(dist, dist + 4);
        std::cout << dist[0] << std::endl;
    }

    return 0;
}
