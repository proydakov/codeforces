#include <array>
#include <cstdint>
#include <numeric>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int, 4> data{};
    std::cin >> data[0] >> data[1] >> data[2] >> data[3];
    std::sort(data.begin(), data.end());

    auto const summ = std::accumulate(data.begin(), data.end(), 0);
    auto const half = summ / 2;

    if ((data.back() == half or (data.back() + data.front()) == half) and summ % 2 == 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    std::cout << std::endl;

    return 0;
}
