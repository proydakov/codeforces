#include <cstdint>
#include <iostream>

void solve()
{
    int n, a, b;
    std::cin >> n >> a >> b;

    for(int i = 0; i < n; i++)
    {
        int shift = i % b;
        std::cout << char('a' + shift);
    }
    std::cout << "\n";
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
