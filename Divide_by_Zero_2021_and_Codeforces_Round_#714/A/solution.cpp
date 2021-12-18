#include <string>
#include <vector>
#include <cstdint>
#include <numeric>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, k;
    std::cin >> n >> k;

    if ((n % 2 == 1 && k > n / 2) || (n % 2 == 0 && k >= n / 2))
    {
        std::cout << "-1\n";
        return;
    }

    std::vector<int> vec(n);
    std::iota(vec.begin(), vec.end(), 1);

    for(size_t i = 1, j = 0; j < k; i += 2, j++)
    {
        std::swap(vec[i], vec[i + 1]);
    }

    for(auto const& v : vec)
    {
        std::cout << v << ' ';
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
