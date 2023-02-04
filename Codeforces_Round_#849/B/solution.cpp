#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::string cmd;
    std::cin >> cmd;

    int x = 0;
    int y = 0;

    bool f = false;

    for(char c : cmd)
    {
        if (c == 'U')
        {
            y++;
        }
        else if (c == 'D')
        {
            y--;
        }
        else if (c == 'L')
        {
            x--;
        }
        else if (c == 'R')
        {
            x++;
        }

        if (x == 1 && y == 1)
        {
            f = true;
            break;
        }
    }

    std::cout << (f ? "YES\n" : "NO\n");
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
