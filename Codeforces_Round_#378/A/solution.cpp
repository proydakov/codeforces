#include <cmath>
#include <array>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    std::array<int, 256> cache;
    cache.fill(0);

    cache['A'] = 1;
    cache['E'] = 1;
    cache['I'] = 1;
    cache['O'] = 1;
    cache['U'] = 1;
    cache['Y'] = 1;

    int delta = -1;
    int position = -1;
    for(int i = 0; i < str.size(); i++) {
        if(cache[str[i]]) {
            delta = std::max(i - position, delta);
            position = i;
        }
    }
    delta = std::max((int)str.size() - position, delta);

    std::cout << delta << std::endl;

    return 0;
}
