#include <set>
#include <stack>
#include <vector>
#include <iostream>

std::vector<std::pair<size_t, size_t>> get_neighbors(size_t x, size_t y, size_t xmax, size_t ymax)
{
    std::vector<std::pair<size_t, size_t>> neighbors;
    neighbors.reserve(4);

    if( (x > 0) ) {
        neighbors.push_back(std::make_pair(x - 1, y));
    }
    if( (x + 1) < xmax ) {
        neighbors.push_back(std::make_pair(x + 1, y));
    }

    if( (y > 0) ) {
        neighbors.push_back(std::make_pair(x, y - 1));
    }
    if( (y + 1) < ymax ) {
        neighbors.push_back(std::make_pair(x, y + 1));
    }

    return neighbors;
}

int main()
{
    std::ios::sync_with_stdio(false);

    size_t h{0}; size_t w{0};
    std::cin >> h;
    std::cin >> w;

    std::vector<std::vector<char>> graph(h, std::vector<char>(w, '0'));
    for(size_t hi = 0; hi < h; hi++) {
        for(size_t wi = 0; wi < w; wi++) {
            std::cin >> graph[hi][wi];
        }
    }

    for(size_t hi = 0; hi < h; hi++) {
        for(size_t wi = 0; wi < w; wi++) {
            if(graph[hi][wi] == '0') {
                continue;
            }

            std::set<std::pair<size_t, size_t>> visited;
            std::stack<std::pair<size_t, size_t>> stack;

            stack.push(std::make_pair(wi, hi));
            while(!stack.empty()) {
                auto top = stack.top();
                stack.pop();

                auto pair = visited.insert(top);
                if(!pair.second) {
                    std::cout << "Yes" << std::endl;
                    return 0;
                }

                const char symb = graph[top.second][top.first];
                auto neighbors = get_neighbors(top.first, top.second, w, h);
                for(const auto& neighbor : neighbors) {
                    if(symb == graph[neighbor.second][neighbor.first]) {
                        stack.push(neighbor);
                    }
                }

                graph[top.second][top.first] = '0';
            }
        }
    }

    std::cout << "No" << std::endl;

    return 0;
}
