#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio();

    int n; int k;

    std::cin >> n;
    std::cin >> k;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int acc = 0;

    int prev = k;
    for(int i = 0; i < n; i++) {
        int sum = prev + data[i];
        if(sum < k) {
            int delta = k - sum;
            data[i] += delta;
            acc += delta;
        }
        prev = data[i];
    }

    std::cout << acc << std::endl;
    for(int i = 0; i < n; i++) {
        std::cout << data[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
