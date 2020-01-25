#include <array>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::array<int, 1024> data{};
    for (int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;
        data[val]++;
    }
    auto const it = std::max_element(data.begin(), data.end());
    std::cout << *it << std::endl;

    return 0;
}
