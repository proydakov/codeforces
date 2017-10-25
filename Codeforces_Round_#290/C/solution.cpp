#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void dfs(const std::vector<std::vector<size_t>>& graph, std::vector<int8_t>& used, std::vector<size_t>& ans, size_t v)
{
    used[v] = true;
    for (size_t i = 0; i < graph[v].size(); i++) {
        const size_t to = graph[v][i];
        if (!used[to]) {
            dfs(graph, used, ans, to);
        }
    }
    std::cout << "add: " << (char)(v + 'a') << std::endl;
    ans.push_back(v);
}

void topological_sort(const std::vector<std::vector<size_t>>& graph, std::vector<int8_t>& used, std::vector<size_t>& ans)
{
    for (size_t i = 0; i < graph.size(); i++) {
        used[i] = false;
    }
    for (size_t i = 0; i < graph.size(); i++) {
        if (!used[i]) {
            dfs(graph, used, ans, i);
        }
    }
    std::reverse(ans.begin(), ans.end());
}

int main()
{
    std::ios::sync_with_stdio(false);

    size_t size{0};
    std::cin >> size;

    std::vector<std::string> data(size);
    for(size_t i = 0; i < size; i++) {
        std::cin >> data[i];
    }

    std::vector<std::vector<size_t>> graph(26);
    for(size_t i = 1; i < size; i++) {
        const std::string word1 = data[i - 1];
        const std::string word2 = data[i    ];

        const size_t size = std::min(word1.size(), word2.size());
        bool add = false;
        for(size_t p = 0; p < size; p++) {
            if(word1[p] > word2[p]) {
                add = true;
                graph[word2[p] - 'a'].push_back(word1[p] - 'a');
            }
            else if(word1[p] == word2[p]) {
            }
            else {
                add = true;
                break;
            }
        }
        if(!add && word1.size() >= word2.size()) {
            std::cout << "Impossible!!!" << std::endl;
            return 0;
        }
    }

    for(size_t i = 0; i < graph.size(); i++) {
        std::cout << "i: " << (char)(i + 'a') << " = ";
        for(const auto item : graph[i]) {
            std::cout << (char)(item + 'a') << ' ';
        }
        std::cout << std::endl;
    }

    std::vector<int8_t> used(26);

    std::vector<size_t> order;
    order.reserve(26);

    topological_sort(graph, used, order);
    if(order.size() < 26) {
        std::cout << "Impossible" << std::endl;
    }
    else {
        for(const auto item : order) {
            std::cout << (char)(item + 'a');
        }
        std::cout << std::endl;
    }

    return 0;
}
