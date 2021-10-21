#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string a, b, c;
    std::cin >> a >> b >> c;

    for(size_t i = 0; i < a.size(); i++)
    {
        if (a[i] == c[i] || b[i] == c[i])
        {
            // pass
        }
        else
        {
            std::cout << "NO\n";
            return;
        }
    }

    std::cout << "YES\n";
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
