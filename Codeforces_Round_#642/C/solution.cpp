#include <cstdint>
#include <iostream>

void solve()
{
    int64_t n;
    std::cin >> n;

    int64_t result = 0;
    for(int64_t i = 0; i <= n / 2; i++)
    {
        result += i * i;
    }
    std::cout << (result * 8) << '\n';
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
