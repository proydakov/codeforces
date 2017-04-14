#include <array>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int h; int w;
    std::cin >> h;
    std::cin >> w;

    std::array<int, 256> cache;
    cache.fill(0);

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            char c;
            std::cin >> c;

            cache[c]++;
        }
    }

    if(cache['C'] > 0 || cache['M'] > 0 || cache['Y'] > 0) {
        std::cout << "#Color" << std::endl;
    }
    else {
        std::cout << "#Black&White" << std::endl;
    }

    return 0;
}
