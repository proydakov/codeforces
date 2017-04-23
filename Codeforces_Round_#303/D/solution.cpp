#include <vector>
#include <cstdint>
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

    int count = 0;
    uint64_t sum = 0;
    for(const uint64_t item : data) {
        if(sum <= item) {
            count++;
            sum += item;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
