#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t n;
    std::vector<int64_t> data(7);

    std::cin >> n;
    for(auto& e : data) std::cin >> e;

    while(true)
    {
        for(size_t i = 0; i < 7; i++)
        {
            int64_t const v = data[i];
            n -= v;
            if (n <= 0)
            {
                std::cout << (i + 1) << '\n';
                return;
            }
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
