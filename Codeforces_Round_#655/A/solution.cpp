#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    for(int i = 1; i < n; i++)
    {
        std::cout << "44 ";
    }

    std::cout << "387\n";
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
