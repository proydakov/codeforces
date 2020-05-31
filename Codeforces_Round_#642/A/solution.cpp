#include <cstdint>
#include <iostream>

void solve()
{
    int n, m;
    std::cin >> n >> m;

    if(n == 1)
    {
        std::cout << 0;
    }
    else if(n == 2)
    {
        std::cout << m;
    }
    else
    {
        std::cout << m * 2;
    }
    std::cout << '\n';
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
