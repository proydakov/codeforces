#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    if(m > n) {
        std::swap(n, m);
    }

    int count = 0;

    for(; n >= 2 && m >= 1 ;) {
        n -= 2;
        m -= 1;
        count++;

        if(m > n) {
            std::swap(n, m);
        }
    }
    std::cout << count << std::endl;

    return 0;
}
