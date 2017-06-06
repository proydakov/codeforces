#include <string>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t n;
    std::cin >> n;

    int64_t i = n + 1;
    bool found = false;

    for(; !found; i++) {
        std::string str = std::to_string(i);
        size_t index = str.find('8');
        found = index != std::string::npos;

    }
    std::cout << (i - n - 1) << std::endl;

    return 0;
}
