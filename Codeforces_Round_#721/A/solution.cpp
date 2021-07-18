#include <cstdint>
#include <iostream>

void solve()
{
    int64_t s;
    std::cin >> s;

    int64_t m{1};
    while(m * 2 <= s)
    {
        m *= 2;
    }

    std::cout << (m - 1) << "\n";
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
