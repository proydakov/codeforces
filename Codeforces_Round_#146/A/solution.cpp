#include <array>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int count = 0;

    std::string str;
    std::cin >> str;

    std::array<int, 256> cache;
    cache.fill(0);

    for(const char c : str) {
        if(0 == cache[c]) {
            count++;
        }
        cache[c] = 1;
    }

    if(count % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else {
        std::cout << "IGNORE HIM!" << std::endl;
    }

    return 0;
}
