#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::sort(data.begin(), data.end());

    int count = 0;
    for(int i = 0; i < n && data[i] + k <= 5; i++) {
        count++;
    }

    std::cout << (count / 3) << std::endl;

    return 0;
}
