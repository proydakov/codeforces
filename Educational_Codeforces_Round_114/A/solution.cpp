#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    for(size_t i = 1; i <= n; i++)
    {
        size_t total{2 * i};
        std::cout << std::string(i, '(') << std::string(i, ')');
        for(size_t j = total; j < 2 * n; j += 2)
        {
            std::cout << "()";
        }
        std::cout << '\n';
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
