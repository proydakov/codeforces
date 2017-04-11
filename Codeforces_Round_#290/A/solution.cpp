#include <cmath>
#include <vector>
#include <iostream>
#include <functional>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    bool mark = false;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < m; j++) {
                std::cout << '#';
            }
        }
        else {
            if(!mark) {
                for(int j = 1; j < m; j++) {
                    std::cout << '.';
                }
                std::cout << '#';
            }
            else {
                std::cout << '#';
                for(int j = 1; j < m; j++) {
                    std::cout << '.';
                }
            }
            mark = !mark;
        }
        std::cout << std::endl;
    }

    return 0;
}
