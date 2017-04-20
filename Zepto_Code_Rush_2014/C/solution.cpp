#include <limits>
#include <vector>
#include <iostream>

typedef std::vector<std::pair<int, int>> solution_t;
typedef std::vector<std::vector<int>> adjacency_matrix_t;

int build_adjacency_matrix(adjacency_matrix_t& adjacency_matrix, int n, int m, int k, int w)
{
    const int mn = n * m;
    std::vector<char> char_vec(mn);

    // read levels
    std::vector<std::vector<char>> level(k + 1, char_vec);
    for(int i = 1; i <= k; i++) {
        for(int j = 0; j < mn; j++) {
            char c;
            std::cin >> c;
            level[i][j] = c;
        }
    }

    // build cost matrix
    adjacency_matrix.resize(k + 1, std::vector<int>(k + 1, std::numeric_limits<int>::max()));

    // add edge cost from shadow node
    int full_send = mn;
    for(int i = 1; i <= k; i++) {
        adjacency_matrix[i][0] = full_send;
        adjacency_matrix[0][i] = full_send;
    }
    adjacency_matrix[0][0] = 0;

    // add edges between levels
    for(int i = 1; i <= k; i++) {
        for(int j = 1; j <= k; j++) {
            if(i == j) {
                adjacency_matrix[i][j] = 0;
            }
            else {
                int count = 0;
                for(int l = 0; l < mn; l++) {
                    if(level[j][l] != level[i][l]) {
                        count++;
                    }
                }
                int cost = count * w;

                adjacency_matrix[i][j] = cost;
                adjacency_matrix[j][i] = cost;
            }
        }
    }

    return 0;
}

const auto INF = std::numeric_limits<int>::max();

int solve_prims_mst(adjacency_matrix_t& adjacency_matrix, int start_node, solution_t& solution)
{
    const size_t n = adjacency_matrix.size();

    std::vector<int> used(n, 0);
    std::vector<int> min_dist(n, INF);
    std::vector<int> dest_node(n, -1);

    min_dist[start_node] = 0;

    int sum = 0;
    solution.reserve(n);

    for(size_t i = 0; i < n; i++) {
        int v = -1;
        for(int j = 0; j < n; j++) {
            if(!used[j] && (v == -1 || min_dist[j] < min_dist[v])) {
                v = j;
            }
        }

        if(min_dist[v] == INF) {
            throw std::runtime_error("invalid adjacency_matrix");
        }

        used[v] = 1;

        if (dest_node[v] != -1) {
            sum += min_dist[v];
            solution.push_back(std::make_pair(v, dest_node[v]));
        }

        for(size_t to = 0; to < n; to++) {
            const int test_dist = adjacency_matrix[v][to];
            if (test_dist < min_dist[to]) {
                min_dist[to] = test_dist;
                dest_node[to] = v;
            }
        }
    }

    return sum;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m; int k; int w;
    std::cin >> n;
    std::cin >> m;
    std::cin >> k;
    std::cin >> w;

    adjacency_matrix_t adjacency_matrix;
    int start_node = build_adjacency_matrix(adjacency_matrix, n, m, k, w);

    solution_t solution;
    int sum = solve_prims_mst(adjacency_matrix, start_node, solution);

    std::cout << sum << std::endl;
    for(const auto item : solution) {
        std::cout << item.first << ' ' << item.second << std::endl;
    }

    return 0;
}
