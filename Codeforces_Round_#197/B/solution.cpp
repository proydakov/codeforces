#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    std::vector<int> data(m, 0);
    for(int i = 0; i < m; i++) {
        std::cin >> data[i];
    }

    int last = data.front();
    int cycle = 0;
    for(int i = 1; i < m; i++) {
        if(data[i] < last) {
            cycle++;
        }
        last = data[i];
    }

    uint64_t res = uint64_t(cycle) * uint64_t(n) + uint64_t(last) - 1;

    std::cout << res << std::endl;

    return 0;
}
