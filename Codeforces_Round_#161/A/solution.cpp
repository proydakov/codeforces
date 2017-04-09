#include <cmath>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int w;
    int h;

    for(int ih = 1; ih <= 5; ih++) {
        for(int iw = 1; iw <= 5; iw++) {
            int temp;
            std::cin >> temp;
            if(1 == temp) {
                w = iw;
                h = ih;
                goto done;
            }
        }
    }
done:

    int delta = std::abs(w - 3) + std::abs(h - 3);

    std::cout << delta << std::endl;

    return 0;
}
