#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t n;
    std::cin >> n;

    int64_t acc = 0;

    std::vector<int64_t> data(n);
    for(size_t i = 0; i < n; i++) {
        std::cin >> data[i];
        acc += data[i];
    }

    if(acc % 3 != 0) {
        std::cout << 0 << std::endl;
        return 0;
    }

    acc /= 3;

    std::vector<int64_t> cache(n, 0);

    int64_t sum = 0;

    for(int64_t i = n - 1; i >= 0; i--) {
        sum += data[i];
        if(acc == sum) {
            cache[i] = 1;
        }
    }

    for(int64_t i = n - 2; i >= 0; i--) {
        cache[i] += cache[i + 1];
    }

    sum = 0;
    int64_t result = 0;

    for(int64_t i = 0; i < n - 2; i++) {
        sum += data[i];
        if(acc == sum) {
            result += cache[i + 2];
        }
    }
    std::cout << result << std::endl;

    return 0;
}
