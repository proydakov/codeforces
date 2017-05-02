#include <cmath>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int max = -1;
    for(int i = 1; i < n; i++) {
        max = std::max(max, data[i] - data[i - 1]);
    }

    int min = 10000;
    for(int i = 1; i < n - 1; i++) {
        min = std::min(min, data[i + 1] - data[i - 1]);
    }
    std::cout << std::max(min, max) << std::endl;

    return 0;
}
