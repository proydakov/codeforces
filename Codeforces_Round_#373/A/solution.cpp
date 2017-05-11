#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> vals(n);
    for(int i = 0; i < n; i++) {
        std::cin >> vals[i];
    }

    if(1 == n) {
        if(0 == vals.back()) {
            std::cout << "UP" << std::endl;
        }
        else if(15 == vals.back()) {
            std::cout << "DOWN" << std::endl;
        }
        else {
            std::cout << -1 << std::endl;
        }
        return 0;
    }

    const int v1 = vals[n - 2];
    const int v2 = vals[n - 1];

    const int delta = v2 - v1;
    if(delta > 0) {
        if(v2 + delta < 16) {
            std::cout << "UP" << std::endl;
        }
        else {
            std::cout << "DOWN" << std::endl;
        }
    }
    else {
        if(v2 + delta > -1) {
            std::cout << "DOWN" << std::endl;
        }
        else {
            std::cout << "UP" << std::endl;
        }
    }

    return 0;
}
