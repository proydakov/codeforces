#include <cmath>
#include <iostream>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);

    std::unordered_map<int, int> cache;
    cache.reserve(16);

    int sum = 0;
    for(int i = 0; i < 5; i++) {
        int temp;
        std::cin >> temp;
        cache[temp]++;

        sum += temp;
    }

    if(5 == cache.size()) {
        std::cout << sum << std::endl;
        return 0;
    }

    int min_sum = sum;

    for(const auto item : cache) {
        if(item.second > 1) {
            int count = std::min(3, item.second);
            int delta = count * item.first;
            int test_min_sum = sum - delta;
            min_sum = std::min(min_sum, test_min_sum);
        }
    }
    std::cout << min_sum << std::endl;

    return 0;
}
