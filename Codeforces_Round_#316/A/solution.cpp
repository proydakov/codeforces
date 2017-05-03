#include <map>
#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    std::vector<int> cities(m + 1, 1);
    for(int i = 1; i <= m; i++) {
        uint32_t max = 0;
        for(int j = 1; j <= n; j++) {
            uint32_t temp;
            std::cin >> temp;
            if(temp > max) {
                max = temp;
                cities[i] = j;
            }
        }
    }

    std::map<int, int> map;
    for(int i = 1; i <= m; i++) {
        map[cities[i]]++;
    }

    int max_cities = 0;
    int index = -1;
    for(const auto item : map) {
        if(item.second > max_cities) {
            index = item.first;
            max_cities = item.second;
        }
    }

    std::cout << index << std::endl;

    return 0;
}
