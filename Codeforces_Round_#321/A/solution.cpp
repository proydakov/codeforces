#include <cmath>
#include <vector>
#include <iostream>
#include <functional>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> data(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int max_length = 1;

    int length = 1;
    for(int i = 1; i < n; i++) {
        if(data[i] >= data[i - 1]) {
            length++;
        }
        else {
            length = 1;
        }

        if(length > max_length) {
            max_length = length;
        }
    }

    std::cout << max_length << std::endl;

    return 0;
}
