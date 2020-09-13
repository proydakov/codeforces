#include <cstdint>
#include <iostream>

void solve()
{
    size_t size;
    std::cin >> size;

    size_t a, b, c;
    std::cin >> a;
    std::cin >> b;

    for(size_t i = 2; i < size; i++)
    {
        std::cin >> c;
    }

    if (a + b > c)
    {
        std::cout << -1 << '\n';
    }
    else
    {
        std::cout << 1 << ' ' << 2 << ' ' << size << '\n';
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
