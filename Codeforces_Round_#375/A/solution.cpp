#include <array>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int, 3> data;
    std::cin >> data[0];
    std::cin >> data[1];
    std::cin >> data[2];

    std::sort(data.begin(), data.end());

    std::cout << (data[1] - data[0] + data[2] - data[1]) << std::endl;

    return 0;
}
