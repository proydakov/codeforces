#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int temp;
    std::cin >> temp;

    int min = temp;
    int max = temp;

    int new_min = 0;
    int new_max = 0;

    for(int i = 1; i < n; i++) {
        std::cin >> temp;
        if(temp < min) {
            min = temp;
            new_min++;
        }
        else if(temp > max) {
            max = temp;
            new_max++;
        }
    }

    std::cout << (new_min + new_max) << std::endl;

    return 0;
}
