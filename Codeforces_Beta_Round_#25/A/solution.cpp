#include <array>
#include <iostream>

struct item
{
    int count;
    int val;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int size{0};
    std::cin >> size;

    std::array<item, 2> cache;
    cache.fill({0, 0});

    for(int i = 0; i < size; i++) {
        int temp;
        std::cin >> temp;
        int k = temp % 2;
        cache[k].val = i + 1;
        cache[k].count++;
    }

    for(int i = 0; i < 2; i++) {
        if(cache[i].count == 1) {
            std::cout << cache[i].val << std::endl;
        }
    }

    return 0;
}
