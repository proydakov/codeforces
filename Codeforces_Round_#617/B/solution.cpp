#include <cstdint>
#include <iostream>

void solve()
{
    int s;
    std::cin >> s;

    int r = 0;
    while (s > 9)
    {
        int ost = s % 10;
        int del = s / 10;
        r += del * 10;
        s = ost + del;
    }
    r += s;
    std::cout << r << std::endl;
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
