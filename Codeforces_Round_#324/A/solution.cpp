#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int t;
    std::cin >> n;
    std::cin >> t;

    if(t == 10) {
        if(n == 1) {
            std::cout << "-1" << std::endl;
        }
        else {
            for(int i = 1; i < n; i++) {
                std::cout << 1;
            }
            std::cout << "0" << std::endl;
        }
    }
    else {
        for(int i = 0; i < n; i++) {
            std::cout << t;
        }
        std::cout << std::endl;
    }

    return 0;
}
