#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int k;
    int l;
    int m;
    int n;
    int d;

    std::cin >> k;
    std::cin >> l;
    std::cin >> m;
    std::cin >> n;
    std::cin >> d;

    int dmg = 0;
    for(int i = 1; i <= d; i++) {
        if((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0)) {
            dmg++;
        }
    }

    std::cout << dmg << std::endl;

    return 0;
}
