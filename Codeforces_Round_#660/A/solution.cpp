#include <cstdint>
#include <iostream>
 
void solve()
{
    size_t s;
    std::cin >> s;
 
    if (s < 31)
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
        std::cout << "6 10 ";
        auto const delta = (s - 30);
        if (delta == 6 or delta == 10 or delta == 14)
        {
            std::cout << "15 " << (s - 31) << "\n";
        }
        else
        {
            std::cout << "14 " << delta << "\n";
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
