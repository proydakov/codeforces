#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    double x0; double y0; int n;
    std::cin >> x0;
    std::cin >> y0;
    std::cin >> n;

    double x; double y; double s;

    double min_time = 1000000;

    for(int i = 0; i < n; i++) {
        std::cin >> x;
        std::cin >> y;
        std::cin >> s;

        double test_min_time = std::sqrt( (x0 - x) * (x0 - x) + (y0 - y) * (y0 - y) ) / s;
        min_time = std::min(min_time, test_min_time);
    }
    std::cout << std::setprecision(25) << min_time << std::endl;

    return 0;
}
