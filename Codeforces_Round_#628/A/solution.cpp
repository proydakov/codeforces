#include <cstdint>
#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int const a = n - 1;
    int const b = n - a;

    std::cout << a << ' ' << b << '\n';
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
