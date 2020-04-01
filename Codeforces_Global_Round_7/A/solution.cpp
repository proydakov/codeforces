#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    if (n == 1)
    {
        std::cout << -1;
    }
    else
    {
        if (((n - 1) * 2 + 3) % 3 != 0)
        {
            std::string val(n - 1, '2');
            std::cout << val;
        }
        else
        {
            std::string val(n - 2, '2');
            std::cout << val << 3;
        }
        std::cout << 3;
    }
    std::cout << std::endl;
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
