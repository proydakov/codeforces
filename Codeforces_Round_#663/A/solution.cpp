#include <cstdint>
#include <iostream>
 
void solve()
{
    size_t size;
    std::cin >> size;
 
    for(size_t i = 1; i <= size; i++)
    {
        std::cout << i << ' ';
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
