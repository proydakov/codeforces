#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<std::pair<uint64_t, uint64_t>> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i].first;
        std::cin >> data[i].second;
    }
    std::sort(data.begin(), data.end());

    uint64_t prev = data[0].second;
    for(int i = 1; i < n; i++) {
        if(data[i].second >= prev) {
            prev = data[i].second;
        }
        else {
            prev = data[i].first;
        }
    }
    std::cout << prev << std::endl;

    return 0;
}
