#include <cstdint>
#include <iomanip>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    double result = 0;
    for(int i = 1; i <= n; i++)
    {
        result += 1.0 / i;
    }
    std::cout << std::setprecision(12) << std::fixed << result << std::endl;

    return 0;
}
