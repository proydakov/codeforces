#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int count = 0;
    auto it = std::max_element(data.begin() + 1, data.end());

    while(data[0] <= *it) {
        data[0]++;
        *it = *it - 1;
        count++;
        it = std::max_element(data.begin() + 1, data.end());
    }
    std::cout << count << std::endl;

    return 0;
}
