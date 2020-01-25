#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        int h; int m;
        std::cin >> h;
        std::cin >> m;

        std::cout << ((23 - h) * 60 + 60 - m) << std::endl;
    }

    return 0;
}
