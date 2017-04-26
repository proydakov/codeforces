#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    const int min = *std::min_element(data.begin(), data.end());
    const int max = *std::max_element(data.begin(), data.end());

    const uint64_t min_count = std::count(data.begin(), data.end(), min);
    const uint64_t max_count = std::count(data.begin(), data.end(), max);

    std::cout << max - min << ' ';
    if(min == max) {
        std::cout << (min_count * (min_count - 1) / 2);
    }
    else {
        std::cout << (max_count * min_count);
    }
    std::cout << std::endl;

    return 0;
}
