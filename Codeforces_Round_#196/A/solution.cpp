#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;

    std::cin >> n;
    std::cin >> m;

    std::vector<int> data(m, 0);
    for(int i = 0; i < m; i++) {
        std::cin >> data[i];
    }

    std::sort(data.begin(), data.end());

    int min = data.back() - data.front();
    for(int i = 0; i < m - n + 1; i++) {
        const int temp = data[i + n - 1] - data[i];
        if(temp < min) {
            min = temp;
        }
    }

    std::cout << min << std::endl;

    return 0;
}
