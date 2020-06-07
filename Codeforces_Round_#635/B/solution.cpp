#include <cstdint>
#include <iostream>

void solve()
{
    int x, n, m;
    std::cin >> x >> n >> m;

    int max_lightning_damage = m * 10;

    while(n > 0)
    {
        int next_x = x / 2 + 10;
        if (next_x < x)
        {
            x = next_x;
            n--;
        }
        else
        {
            break;
        }
    }

    std::cout << (x <= max_lightning_damage ? "YES" : "NO") << '\n';
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
