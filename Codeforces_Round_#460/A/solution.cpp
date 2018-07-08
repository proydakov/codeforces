#include <iomanip>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    int m;
    std::cin >> n;
    std::cin >> m;

    double best = 10000;
    for(int i = 0; i < n; i++)
    {
        double a;
        double b;
        std::cin >> a;
        std::cin >> b;

        double temp = a / b;
        if(temp < best)
        {
            best = temp;
        }
    }
    std::cout << std::setprecision(9) << best * m << std::endl;

    return 0;
}
