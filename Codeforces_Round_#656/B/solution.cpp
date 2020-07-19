#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    int check[64] = { 0 };

    for(size_t i = 0; i < n * 2; i++)
    {
        int val;
        std::cin >> val;

        if(0 == check[val])
        {
            std::cout << val << ' ';
            check[val] = 1;
        }
    }
    std::cout << '\n';
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
