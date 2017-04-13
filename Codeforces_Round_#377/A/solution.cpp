#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int k;
    int r;

    std::cin >> k;
    std::cin >> r;

    int count = 1;
    int summ = k;

    while(summ % 10 != r && summ % 10 != 0) {
        count++;
        summ += k;
    }

    std::cout << count << std::endl;

    return 0;
}
