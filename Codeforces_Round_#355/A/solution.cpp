#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int h;
    std::cin >> n;
    std::cin >> h;

    size_t w = 0;
    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        if(temp > h) {
            w += 2;
        }
        else {
            w += 1;
        }
    }

    std::cout << w << std::endl;

    return 0;
}
