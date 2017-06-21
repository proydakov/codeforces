#include <vector>
#include <limits>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::string dirs;
    std::cin >> dirs;

    std::vector<int64_t> particles(n);
    for(int i = 0; i < n; i++) {
        std::cin >> particles[i];
    }

    int64_t distance = std::numeric_limits<int64_t>::max();
    for(auto n = dirs.find("RL"); n != std::string::npos; n = dirs.find("RL", n + 2)) {
        const int64_t R = particles[n + 0];
        const int64_t L = particles[n + 1];

        const int64_t test_distance = (L - R) / 2;
        distance = std::min(distance, test_distance);
    }

    if(std::numeric_limits<int64_t>::max() == distance) {
        std::cout << -1 << std::endl;
    }
    else {
        std::cout << distance << std::endl;
    }

    return 0;
}
