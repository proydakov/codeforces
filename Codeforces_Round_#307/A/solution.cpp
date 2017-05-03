#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::vector<int> copy(data);
    std::sort(copy.rbegin(), copy.rend());

    std::unordered_map<int, int> cache;
    cache.reserve(n);

    int place = 1;
    cache[copy[0]] = place;
    for(int i = 1; i < n; i++) {
        if(copy[i] < copy[i - 1]) {
            place = i + 1;
        }
        cache[copy[i]] = place;
    }

    for(int i = 0; i < n; i++) {
        std::cout << cache[data[i]] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
