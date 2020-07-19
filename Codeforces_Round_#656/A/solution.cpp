#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    long data[3];
    std::cin >> data[0] >> data[1] >> data[2];

    std::sort(data, data + 3);

    if (data[1] != data[2])
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
        std::cout << data[0] << ' ' << data[0] << ' ' << data[2] << '\n';
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
