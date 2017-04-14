#include <array>
#include <numeric>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::array<int, 1024> array;
    for(int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    int count = std::accumulate(array.begin(), array.begin() + n, 0);

    double bottom = n;

    std::cout << count / bottom << std::endl;

    return 0;
}
