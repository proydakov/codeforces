#include <cstdint>
#include <iostream>

void solve()
{
    int k;
    std::cin >> k;

    int t1 = k;
    int t2 = 100 - k;

    for(int i = 2; i <= 10; i++)
    {
        while(t1 % i == 0 && t2 % i == 0)
        {
            t1 /= i;
            t2 /= i;
        }
    }

    std::cout << (t1 + t2) << "\n";
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
