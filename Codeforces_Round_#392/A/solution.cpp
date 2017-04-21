#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::sort(data.begin(), data.end());

    int max = data.back();

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += max - data[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
