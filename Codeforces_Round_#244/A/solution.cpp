#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int count = 0;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        sum += temp;
        if(sum < 0) {
            count = std::max(count, std::abs(sum));
        }
    }

    std::cout << count << std::endl;

    return 0;
}
