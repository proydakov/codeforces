#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> vec;
    for(int i = k + 1; i <= n; i++)
    {
        vec.emplace_back(i);
    }

    for(int i = k / 2 + k % 2; i <= k - 1; i++)
    {
        vec.emplace_back(i);
    }

    std::cout << vec.size() << '\n';
    for(auto const e : vec)
    {
        std::cout << e << ' ';
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
