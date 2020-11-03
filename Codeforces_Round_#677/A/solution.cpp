#include <cstdint>
#include <iostream>

void solve()
{
    int number;
    std::cin >> number;

    int result = ((number % 10) - 1) * 10;
    int step = 1;
    while(number > 0)
    {
        result += step;
        step++;
        number /= 10;
    }
    std::cout << result << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
