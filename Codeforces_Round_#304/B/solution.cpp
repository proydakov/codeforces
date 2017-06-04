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

    int count = 0;
    for(int i = 1; i < n; i++) {
        if(data[i] <= data[i - 1]) {
            int delta = data[i - 1] + 1 - data[i];
            count += delta;
            data[i] += delta;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
