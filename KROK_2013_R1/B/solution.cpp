#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    size_t n; size_t m;
    std::cin >> n;
    std::cin >> m;

    bool ok = (n == m) || (n == (m + 1));
    if(!ok) {
        std::cout << "unknown topology" << std::endl;
        return 0;
    }

    std::vector<std::vector<size_t>> graph(n + 1);
    for(size_t i = 0; i < m; i++) {
        size_t v1; size_t v2;
        std::cin >> v1;
        std::cin >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    size_t min = std::numeric_limits<size_t>::max();
    size_t max = 0;
    for(size_t i = 1; i <= n; i++) {
        min = std::min(min, graph[i].size());
        max = std::max(max, graph[i].size());
    }

    if(min == 1 && max == m) {
        std::cout << "star topology" << std::endl;
        return 0;
    }

    if(n == m && min == 2 && max == 2) {
        std::cout << "ring topology" << std::endl;
        return 0;
    }

    if(n == (m + 1) && min == 1 && max == 2) {
        std::cout << "bus topology" << std::endl;
        return 0;
    }

    std::cout << "unknown topology" << std::endl;

    return 0;
}
