#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    size_t negative = 0;
    for(size_t i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;
        if (val == 2)
        {
            negative += 1;
        }
    }

    std::cout << (n - negative) << "\n";
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
