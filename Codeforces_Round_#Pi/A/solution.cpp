#include <cmath>
#include <limits>
#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int64_t> data;
    data.reserve(n + 2);

    data.push_back(std::numeric_limits<int64_t>::min() / 2);
    for(int i = 0; i < n; i++) {
        int64_t temp;
        std::cin >> temp;
        data.push_back(temp);
    }
    data.push_back(std::numeric_limits<int64_t>::max() / 2);

    for(int i = 1; i <= n; i++) {
        int64_t min = std::min( (data[i] - data[i - 1]), (data[i + 1] - data[i]) );

        int64_t max = std::max( (data[i] - data[1]), (data[n] - data[i]) );

        std::cout << min << ' ' << max << std::endl;
    }

    return 0;
}
