#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m; int z;

    std::cin >> n;
    std::cin >> m;
    std::cin >> z;

    int counter = 0;
    for(int i = 1; i <= z; i++) {
        if( (i % n == 0) && ( i % m == 0) ) {
            counter++;
        }
    }
    std::cout << counter << std::endl;

    return 0;
}
