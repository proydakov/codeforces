#include <vector>
#include <iostream>
#include <algorithm>

struct node_t
{
    node_t() : color(0) {}

    std::size_t color;
    std::vector<std::size_t> edges;
};

int main()
{
    std::ios::sync_with_stdio(false);

    std::size_t n;
    std::size_t m;
    std::cin >> n;
    std::cin >> m;

    std::vector<node_t> graph(n + 1);
    for(std::size_t i = 0; i < m; i++)
    {
        std::size_t v1; std::size_t v2;
        std::cin >> v1;
        std::cin >> v2;

        graph[v1].edges.push_back(v2);
        graph[v2].edges.push_back(v1);
    }

    std::vector<std::size_t> stack;
    stack.reserve(n);

    std::size_t result = 0;

    std::size_t color = 1;
    for(std::size_t i = 1; i < graph.size(); i++)
    {
        if(graph[i].color == 0)
        {
            std::size_t min = 1000000;
            std::size_t max = 0;

            stack.push_back(i);
            while(not stack.empty())
            {
                auto& node = graph[stack.back()];
                stack.pop_back();
                if(node.color == 0)
                {
                    node.color = color;
                    min = std::min(min, node.edges.size());
                    max = std::max(max, node.edges.size());

                    std::copy(node.edges.begin(), node.edges.end(), std::back_inserter(stack));
                }
            }

            if(min == 2 and max == 2)
            {
                result++;
            }

            color++;
        }
    }

    std::cout << result << std::endl;

    return 0;
}
