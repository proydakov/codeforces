#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(0);

    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }
    std::sort(data.begin(), data.end());

    for(int i = 0; i < n; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
