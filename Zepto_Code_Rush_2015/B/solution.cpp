#include <cmath>
#include <vector>
#include <iostream>

std::pair<int, int> calc_solition(const std::vector<int>& heap, size_t index)
{
    if(index >= heap.size()) {
        return std::make_pair(0, 0);
    }
    const auto left_res = calc_solition(heap, index * 2 + 1);
    const auto rigt_res = calc_solition(heap, index * 2 + 2);

    const int current = heap[index];
    const int append = std::abs(left_res.second - rigt_res.second);
    const int weight = std::max(left_res.second, rigt_res.second);

    return std::make_pair(left_res.first + rigt_res.first + append, weight + current);
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int count = std::pow(2, n + 1) - 2;
    std::vector<int> heap(count + 1, 0);

    for(int i = 1; i <= count; i++) {
        std::cin >> heap[i];
    }

    auto solution = calc_solition(heap, 0);
    std::cout << solution.first << std::endl;

    return 0;
}
