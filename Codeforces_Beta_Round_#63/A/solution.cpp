
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int xt = 0;
    int yt = 0;
    int zt = 0;

    for(int i = 0; i < n; i++) {
        int x, y, z;
        std::cin >> x;
        std::cin >> y;
        std::cin >> z;

        xt += x;
        yt += y;
        zt += z;
    }

    if(xt == 0 && yt == 0 && zt == 0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
