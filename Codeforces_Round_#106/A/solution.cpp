#include <array>
#include <numeric>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int k;
    std::cin >> k;

    std::array<int, 12> months;
    months.fill(0);

    for(int i = 0; i < 12; i++) {
        std::cin >> months[i];
    }

    int sum = std::accumulate(months.begin(), months.end(), 0);
    if(sum < k) {
        std::cout << -1 << std::endl;
        return 0;
    }

    int num = 0;
    int count = 0;

    std::sort(months.begin(), months.end());
    for(int i = 11; i >= 0 && count < k; i--) {
        num++;
        count += months[i];
    }

    std::cout << num << std::endl;

    return 0;
}
