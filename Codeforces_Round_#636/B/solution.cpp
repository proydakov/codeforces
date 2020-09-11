#include <cstdint>
#include <iostream>
     
void solve()
{
    int val;
    std::cin >> val;

    int half = val / 2;
    if (half % 2 == 1)
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
        for(int i = 0; i < half; i++)
        {
            std::cout << (2 * (i + 1)) << ' ';
        }
        for(int i = 1; i < half; i++)
        {
            std::cout << (i * 2 - 1) << ' ';
        }
        std::cout << (half * 2 - 1 + half) << "\n";
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
