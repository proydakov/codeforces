#include <cstdint>
#include <iostream>
     
void solve()
{
    long x, y, n;
    std::cin >> x >> y >> n;
     
    long res = n / x;
    res *= x;
    res += y;
    if (res > n)
    {
        res -= x;
    }
    std::cout << res << '\n';
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
