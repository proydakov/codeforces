#include <array>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::array<int, 256> cache;
    cache.fill(0);

    for(int i = 0; i < n; i++) {
        char c;
        std::cin >> c;

        cache[c]++;
    }

    if(cache['A'] > cache['D']) {
        std::cout << "Anton" << std::endl;
    }
    else if(cache['A'] < cache['D']) {
        std::cout << "Danik" << std::endl;
    }
    else {
        std::cout << "Friendship" << std::endl;
    }

    return 0;
}
