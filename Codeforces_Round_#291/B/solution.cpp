#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int x0; int y0;
    std::cin >> n;
    std::cin >> x0;
    std::cin >> y0;

    std::unordered_map<double, int> cache;

    for(int i = 0; i < n; i++) {
        int x1; int y1;

        std::cin >> x1;
        std::cin >> y1;

        x1 -= x0;
        y1 -= y0;

        if(y1 < 0) {
            x1 *= -1;
            y1 *= -1;
        }
        else if(y1 == 0) {
            x1 = std::abs(x1);
        }

        double angle = 0;

        if(x1 == 0) {
            if(y1 > 0) {
                angle = M_PI / 2;
            }
            else {
                angle = 3 * M_PI / 2;
            }
        }
        else {
            angle = atan2(y1, x1);
        }

        if(angle <= 0) {
            angle = M_PI + angle;
        }

        cache[angle] = 1;
    }

    std::cout << cache.size() << std::endl;

    return 0;
}
