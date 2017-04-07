#include <array>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string cmd;
    std::cin >> cmd;

    std::array<int, 256> cache;
    cache.fill(0);
    cache['H'] = 1;
    cache['Q'] = 1;
    cache['9'] = 1;

    bool output = false;
    for(const char c : cmd) {
        output = cache[c];
        if(output) {
            break;
        }
    }

    if(output) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
