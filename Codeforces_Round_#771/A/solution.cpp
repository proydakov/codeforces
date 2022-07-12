#include <string>
#include <vector>
#include <cstdint>
#include <optional>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    int64_t val{};
    std::optional<size_t> from, until;
    for (size_t i = 0; i < n; i++)
    {
        auto const v = vec[i];
        auto const t = static_cast<int64_t>(i + 1);
        if (!from && v != t)
        {
            from = i;
            val = t;
        }

        if (from && v == val)
        {
            until = i;
        }
    }

    if (from && until)
    {
        size_t f = from.value();
        size_t u = until.value();

        for (size_t i = f, j = u; i <= j; i++, j--)
        {
            std::swap(vec[i], vec[j]);
        }
    }

    for (auto const v :  vec)
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
