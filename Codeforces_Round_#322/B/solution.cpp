#include <cmath>
#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    size_t n;

    std::cin >> n;

    std::vector<int64_t> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int64_t prev = 0;
    int64_t max = 0;
    std::vector<int64_t> result(n, 0);

    for(int64_t i = data.size() - 1; i >= 0; i--) {
        max = std::max(data[i], max);
        int64_t delta = max - data[i];
        if(max == prev) {
            delta++;
        }
        result[i] = delta;
        prev = max;
    }

    for(const auto val : result) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    return 0;
}
