#include <cmath>
#include <vector>
#include <iostream>

size_t max_depth(std::vector<std::vector<size_t>>& tree, size_t index)
{
    size_t depth = 0;
    for(const size_t i : tree[index]) {
        depth = std::max(depth, 1 + max_depth(tree, i));
    }

    return depth;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<std::vector<size_t>> tree(n + 1);

    /// build tree
    for(int i = 1; i <= n; i++) {
        int temp;
        std::cin >> temp;

        temp = std::max(temp, 0);
        tree[temp].push_back(size_t(i));
    }

    /// calc max depth
    size_t max = max_depth(tree, 0);
    std::cout << max << std::endl;

    return 0;
}
