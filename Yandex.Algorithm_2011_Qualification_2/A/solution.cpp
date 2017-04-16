#include <array>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<std::string, 5> array{ "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

    int n;
    std::cin >> n;

    int k = 1;

    while(true) {
        int delta = k * 5;
        int temp = n - delta;
        if(temp <= 0) {
            break;
        }
        n -= delta;
        k *= 2;
    }

    int index = -1;

    if(n <= k) {
        index = 0;
    }
    else if(n <= k * 2) {
        index = 1;
    }
    else if(n <= k * 3) {
        index = 2;
    }
    else if(n <= k * 4) {
        index = 3;
    }
    else if(n <= k * 5) {
        index = 4;
    }

    std::cout << array[index] << std::endl;

    return 0;
}
