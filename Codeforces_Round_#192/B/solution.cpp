#include <vector>
#include <cstdint>
#include <iostream>

// https://en.wikipedia.org/wiki/Star_(graph_theory)

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    std::vector<int8_t> data(n + 1, 0);
    for(int i = 0; i < m; i++) {
        size_t v1{0};
        size_t v2{0};

        std::cin >> v1;
        std::cin >> v2;

        data[v1] = 1;
        data[v2] = 1;
    }

    size_t center = 0;
    for(int i = 1; i <= n; i++) {
        if(0 == data[i]) {
            center = i;
            break;
        }
    }

    std::cout << (n - 1) << std::endl;
    for(int i = 1; i <= n; i++) {
        if(i == center) {
            continue;
        }
        std::cout << i << ' ' << center << std::endl;
    }

    return 0;
}
