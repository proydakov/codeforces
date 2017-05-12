#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int l; int q; int p;
    std::cin >> l;
    std::cin >> q;
    std::cin >> p;

    int vall = q + p;
    double time = double(l) / vall;
    double dist = time * q;

    std::cout << dist << std::endl;

    return 0;
}
