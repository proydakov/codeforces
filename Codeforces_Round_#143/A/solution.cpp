#include <array>
#include <iostream>
#include <numeric>

int main()
{
    std::ios::sync_with_stdio(false);

    int tasks;
    std::cin >> tasks;

    int solve = 0;
    std::array<int, 3> cache;
    cache.fill(0);
    for(int i = 0; i < tasks; i++) {
        std::cin >> cache[0];
        std::cin >> cache[1];
        std::cin >> cache[2];

        const int sum = std::accumulate(cache.begin(), cache.end(), 0);
        if(sum > 1) {
            ++solve;
        }
    }

    std::cout << solve << std::endl;

    return 0;
}
