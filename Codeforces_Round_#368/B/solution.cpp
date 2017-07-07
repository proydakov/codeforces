#include <limits>
#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    size_t n; size_t m; size_t k;
    std::cin >> n;
    std::cin >> m;
    std::cin >> k;

    std::vector<std::pair<size_t, int64_t>> pre;
    pre.reserve(1024);

    std::vector<std::vector<std::pair<size_t, int64_t>>> graph(n + 1, pre);
    for(size_t i = 0; i < m; i++) {
        size_t u; size_t v; int64_t dist;
        std::cin >> u;
        std::cin >> v;
        std::cin >> dist;

        graph[u].push_back(std::make_pair(v, dist));
        graph[v].push_back(std::make_pair(u, dist));
    }

    std::vector<int8_t> cache(n + 1, 0);
    for(size_t i = 0; i < k; i++) {
        size_t index = 0;
        std::cin >> index;
        cache[index] = 1;
    }

    int64_t result = std::numeric_limits<int64_t>::max();

    for(size_t i = 0; i < cache.size(); i++) {
        if(0 == cache[i]) {
            continue;
        }

        for(const auto item : graph[i]) {
            if(0 == cache[item.first]) {
                result = std::min(result, item.second);
            }
        }
    }

    if(std::numeric_limits<int64_t>::max() == result) {
        result = -1;
    }

    std::cout << result << std::endl;

    return 0;
}
