#include <cstdint>
#include <iostream>

void solve()
{
    int64_t n;
    std::cin >> n;

    int64_t delta = 1;
    int64_t size = 0;
    while(n > 0)
    {
        n -= delta;
        delta += 2;
        size++;
    }
    std::cout << size << "\n";
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
