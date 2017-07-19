#include <vector>
#include <iostream>

struct csolver
{
    void solve();
    void walk (size_t head, size_t penalty, size_t prev);

    size_t n = 0;
    size_t m = 0;

    std::vector<std::vector<size_t>> tree;
    std::vector<int> mask;

    size_t solution = 0;
};

void csolver::solve()
{
    walk(1, 0, 0);
}

void csolver::walk(size_t head, size_t penalty, size_t prev)
{
    if(mask[head]) {
        penalty++;
    }
    else {
        penalty = 0;
    }

    if(penalty > m) {
        return;
    }

    for(const auto item : tree[head]) {
        if(item != prev) {
            walk(item, penalty, head);
        }
    }

    if(1 == tree[head].size() && tree[head].back() == prev) {
        solution++;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    csolver solver;

    std::cin >> solver.n;
    std::cin >> solver.m;

    solver.mask.resize(solver.n + 1, 0);
    for(size_t i = 1; i <= solver.n; i++) {
        std::cin >> solver.mask[i];
    }

    solver.tree.resize(solver.n + 1, std::vector<size_t>());
    for(size_t i = 1; i < solver.n; i++) {
        size_t x; size_t y;
        std::cin >> x;
        std::cin >> y;
        solver.tree[x].push_back(y);
        solver.tree[y].push_back(x);
    }

    solver.solve();
    std::cout << solver.solution << std::endl;

    return 0;
}
