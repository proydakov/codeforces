#include <cmath>
#include <limits>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int64_t r;
    int64_t x0; int64_t y0;
    int64_t x1; int64_t y1;

    std::cin >> r;
    std::cin >> x0;
    std::cin >> y0;
    std::cin >> x1;
    std::cin >> y1;

    const int64_t d = 2 * r;
    int64_t counter = 0;

    double euql = std::sqrt( std::pow(double(x0 - x1), 2) + std::pow(double(y0 - y1), 2) );
    counter += euql / d;

    double delta = euql - counter * d;
    if(delta > std::numeric_limits<double>::epsilon()) {
        counter++;
    }

    std::cout << counter << std::endl;

    return 0;
}
