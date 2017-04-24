#include <limits>
#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    std::vector<uint64_t> data(n);

    uint64_t min = std::numeric_limits<uint64_t>::max();

    for(int i = 0; i < n; i++) {
        uint64_t temp;
        std::cin >> temp;
        if(temp < min) {
            min = temp;
        }
        data[i] = temp;
    }

    bool ok = true;
    uint64_t count = 0;

    for(int i = 0; i < n && ok; i++) {
        data[i] -= min;

        if(data[i] % k != 0) {
            ok = false;
        }
        else {
            count += (data[i] / k);
        }
    }

    if(!ok) {
        std::cout << -1 << std::endl;
    }
    else {
        std::cout << count << std::endl;
    }

    return 0;
}
