#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int count;
    std::cin >> count;

    int i = 0;
    int build_count = 0;
    int line_count = 1;
    int delta = 1;

    for(; build_count <= count; i++) {
        build_count += line_count;
        delta += 1;
        line_count += delta;
    }

    std::cout << (--i) << std::endl;

    return 0;
}
