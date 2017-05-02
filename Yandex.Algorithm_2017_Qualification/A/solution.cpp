#include <vector>
#include <iostream>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::unordered_map<int, int> cache;
    cache[1] = 0;

    int count = 1;

    for(int item : data) {
        auto it = cache.find(item);
        if(it != cache.end()) {
            cache.erase(it);
            cache[item + 1] = 0;
        }
        else {
            count++;
            cache[item + 1] = 0;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
