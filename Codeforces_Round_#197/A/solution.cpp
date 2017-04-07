#include <array>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int, 4> cache;
    cache.fill(0);

    int num = 0;
    char c = '+';
    while('+' == c) {
        c = ' ';
        std::cin >> num;
        cache[num]++;
        std::cin >> c;
    }

    int index = 0;
    for(int i = 0; i < 4; i++) {
        if(cache[i] > 0) {
            index = i;
            break;
        }
    }

    std::cout << index;
    cache[index]--;

    for(int i = index; i < 4; i++) {
        for(int j = 0; j < cache[i]; j++) {
            std::cout << '+' << i;
        }
    }
    std::cout << std::endl;

    return 0;
}
