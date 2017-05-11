#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    bool one = false;
    for(int i = 0; i < n; i++) {
        int test;
        std::cin >> test;
        if(1 == test) {
            one = true;
        }
    }

    if(one) {
        std::cout << -1 << std::endl;
    }
    else {
        std::cout << 1 << std::endl;
    }

    return 0;
}
