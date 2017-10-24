#include <limits>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

struct edge_t
{
    size_t v1;
    size_t v2;
};

int main()
{
    std::ios::sync_with_stdio(false);

    size_t n; size_t m;
    std::cin >> n;
    std::cin >> m;

    std::vector<size_t> cache;
    cache.reserve(64);

    std::vector<edge_t> edges;
    edges.reserve(m);

    std::vector<std::vector<size_t>> graph(n + 1, cache);
    for(size_t i = 0; i < m; i++) {
        size_t v1; size_t v2;
        std::cin >> v1;
        std::cin >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

        edges.push_back(edge_t{v1, v2});
    }

    for(auto& vec : graph) {
        std::sort(vec.begin(), vec.end());
    }

    size_t min = std::numeric_limits<size_t>::max();

    std::vector<size_t> intersection;
    intersection.reserve(4096);

    for(const auto edge : edges) {
        const size_t test_min = graph[edge.v1].size() + graph[edge.v2].size();
        if(test_min >= min) {
            continue;
        }

        std::set_intersection(
            graph[edge.v1].begin(), graph[edge.v1].end(),
            graph[edge.v2].begin(), graph[edge.v2].end(),
            std::back_inserter(intersection)
        );

        for(const size_t v : intersection) {
            size_t new_min = graph[v].size() + test_min;
            min = std::min(min, new_min);
        }

        intersection.resize(0);
    }

    if(std::numeric_limits<size_t>::max() == min) {
        std::cout << -1 << std::endl;
    }
    else {
        // remove 2 * 3 from result
        std::cout << (min - 6) << std::endl;
    }

    return 0;
}
