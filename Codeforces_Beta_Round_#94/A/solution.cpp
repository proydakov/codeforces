#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    size_t summ = 0;
    size_t even = 0;
    size_t odd  = 0;

    for(int i = 0; i < n; i++) {
        size_t val;
        std::cin >> val;

        summ += val;
        if(val % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    if(summ % 2 == 0) {
        std::cout << even << std::endl;
    }
    else {
        std::cout << odd << std::endl;
    }

    return 0;
}
