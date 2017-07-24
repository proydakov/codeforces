#include <iostream>

int main()
{
    size_t n; size_t m;
    std::cin >> n;
    std::cin >> m;

    size_t big = n * (n + 1) / 2;
    m %= big;

    for(int i = 1; i <= n; i++) {
        if(m < i) {
            std::cout << m << std::endl;
            break;
        }
        m -= i;
    }

    return 0;
}
