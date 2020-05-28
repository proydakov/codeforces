#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    for(int i = 2; i < 30; i++)
    {
        int sum = (1 << i) - 1;

        if (n % sum == 0)
        {
            std::cout << (n / sum) << '\n';
            break;
        }
    }
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
