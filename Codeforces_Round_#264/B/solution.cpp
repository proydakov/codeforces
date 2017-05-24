#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int max = -1;
    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        max = std::max(max, temp);
    }
    std::cout << max << std::endl;

    return 0;
}
