#include <vector>
#include <cstdint>
#include <numeric>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<uint64_t> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }
    std::sort(data.begin(), data.end());

    uint64_t summ = std::accumulate(data.begin(), data.end(), uint64_t(0));
    uint64_t acc = summ;
    for(int i = 0; i < n - 1; i++) {
        acc += summ;
        summ -= data[i];
    }
    std::cout << acc << std::endl;

    return 0;
}
