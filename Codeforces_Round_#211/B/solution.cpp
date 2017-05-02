#include <vector>
#include <cstdint>
#include <numeric>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int index = 0;
    uint64_t acc = std::accumulate(data.begin(), data.begin() + k, uint64_t(0));

    uint64_t min = acc;
    for(int i = k; i < n; i++) {
        acc -= data[i - k];
        acc += data[i];
        if(acc < min) {
            min = acc;
            index = (i - k + 1);
        }
    }
    std::cout << (index + 1) << std::endl;

    return 0;
}
