#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::int64_t> vec1(n);
    for(auto& e : vec1) std::cin >> e;
    std::vector<std::int64_t> vec2(n);
    for(auto& e : vec2) std::cin >> e;

    std::int64_t m1{};
    std::int64_t m2{};
    for(size_t i = 0; i < n; i++)
    {
        m1 = std::max(m1, std::min(vec1[i], vec2[i]));
        m2 = std::max(m2, std::max(vec1[i], vec2[i]));
    }

    std::cout << (m1 * m2) << '\n';
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
