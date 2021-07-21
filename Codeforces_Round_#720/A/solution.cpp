#include <cstdint>
#include <iostream>

void solve()
{
    int64_t a, b;
    std::cin >> a >> b;

    if (b != 1)
    {
        std::cout << "YES\n";
        std::cout << a << ' ' << (a * b) << ' ' << (a * (b + 1)) << '\n';
    }
    else
    {
        std::cout << "NO\n";
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
