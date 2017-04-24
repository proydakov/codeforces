#include <cmath>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int first_sum = 0;
    int second_sum = 0;

    std::vector<std::pair<int, int>> data(n);
    for(int i = 0; i < n; i++) {
        int first; int second;

        std::cin >> first;
        std::cin >> second;

        data[i].first = first;
        data[i].second = second;

        first_sum += first;
        second_sum += second;
    }

    int index = 0;
    int max = std::abs(first_sum - second_sum);

    for(int i = 0; i < n; i++) {
        int f = data[i].first;
        int s = data[i].second;

        int test_first_sum = first_sum - f + s;
        int test_second_sum = second_sum - s + f;

        int test_max = std::abs(test_first_sum - test_second_sum);
        if(test_max > max) {
            max = test_max;
            index = i + 1;
        }
    }

    std::cout << index << std::endl;

    return 0;
}
