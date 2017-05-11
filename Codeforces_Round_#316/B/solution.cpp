#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;

    std::cin >> n;
    std::cin >> m;

    if(n == 1){
        std::cout << 1 << std::endl;
    }
    else if(m - 1 < n - m){
        std::cout << m + 1 << std::endl;
    }
    else{
        std::cout << m - 1 << std::endl;
    }

    return 0;
}
