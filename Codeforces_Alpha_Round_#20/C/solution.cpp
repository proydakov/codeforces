#include <queue>
#include <limits>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

struct edge_t
{
    size_t   to;
    uint64_t weight;
};

bool operator<(const edge_t& i1, const edge_t& i2)
{
    return i1.weight > i2.weight;
}

std::vector<size_t> dijkstra_search(const std::vector<std::vector<edge_t>>& graph, size_t start)
{
    std::vector<size_t>   came_from(graph.size(), 0);
    std::vector<uint64_t> cost_sfar(graph.size(), std::numeric_limits<uint64_t>::max());

    std::priority_queue<edge_t> queue;
    queue.push(edge_t{ start, 0 });
    cost_sfar[start] = 0;

    while(!queue.empty()) {
        auto current_edge = queue.top();
        queue.pop();

        if (current_edge.weight > cost_sfar[current_edge.to]) {
            continue;
        }

        for(const auto& edge : graph[current_edge.to]) {
            uint64_t new_weight = cost_sfar[current_edge.to] + edge.weight;
            if(new_weight < cost_sfar[edge.to]) {
                cost_sfar[edge.to] = new_weight;
                came_from[edge.to] = current_edge.to;
                queue.push(edge_t{edge.to, new_weight});
            }
        }
    }

    return came_from;
}

int main()
{
    std::ios::sync_with_stdio(false);

    size_t n; size_t m;
    std::cin >> n;
    std::cin >> m;

    std::vector<std::vector<edge_t>> graph(n + 1);
    for(size_t i = 0; i < m; i++) {
        size_t v1;
        size_t v2;
        uint64_t weight;

        std::cin >> v1;
        std::cin >> v2;
        std::cin >> weight;

        if(v1 == v2) {
            continue;
        }

        graph[v1].push_back(edge_t{v2, weight});
        graph[v2].push_back(edge_t{v1, weight});
    }

    std::vector<size_t> came_from = dijkstra_search(graph, 1);
    if(0 == came_from[n]) {
        std::cout << -1 << std::endl;
    }
    else {
        std::vector<size_t> solution;
        solution.reserve(n);
        solution.push_back(n);
        for(size_t from = came_from[n]; from != 0; from = came_from[from]) {
            solution.push_back(from);
        }
        std::reverse(solution.begin(), solution.end());
        for(const auto vertex : solution) {
            std::cout << vertex << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
