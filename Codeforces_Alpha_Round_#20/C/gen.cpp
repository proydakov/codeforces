#include <string>
#include <iostream>

int main(int argc, char * argv[])
{
    std::ios::sync_with_stdio(false);

    if(argc < 2) {
        std::cout << "usage: app <size>" << std::endl;
        return 0;
    }
    const size_t size = std::stoi(argv[1]);

    std::cout << size << ' ' << (size - 1) << std::endl;
    for(size_t i = 1; i < size; i++) {
        std::cout << i << ' ' << (i + 1) << ' ' << 999999 << std::endl;
    }

    return 0;
}
