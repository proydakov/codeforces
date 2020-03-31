#include <iostream>

void solve()
{
    int a; int b;
    std::cin >> a >> b;

    if (a % b == 0)
    {
        std::cout << 0;
    }
    else
    {
        int const delta = (a / b + 1) * b - a;
        std::cout << delta;
    }
    std::cout << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
