#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        int temp;
        std::cin >> temp;
        data[i] = data[i - 1] + temp;
    }

    int query;
    std::cin >> query;
    for(int i = 0; i < query; i++) {
        int temp;
        std::cin >> temp;
        auto it = std::lower_bound(data.begin(), data.end(), temp);
        std::cout << (it - data.begin()) << std::endl;
    }

    return 0;
}
