#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::int32_t> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    std::int64_t accum = 0;
    for(size_t i = 0; i < n; i++)
    {
        std::cout << (vec[i] + accum) << ' ';
        accum += std::max(std::int64_t(vec[i]), std::int64_t(0));
    }
    std::cout << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
