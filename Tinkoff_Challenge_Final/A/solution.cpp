#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int a; int b; int c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int n;
    std::cin >> n;

    uint32_t counter = 0;
    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;

        if(temp > b && temp < c) {
            ++counter;
        }
    }
    std::cout << counter << std::endl;

    return 0;
}
