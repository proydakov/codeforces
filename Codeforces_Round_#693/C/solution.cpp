#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    std::vector<int64_t> acc(n, 0);
    for(int64_t i = n - 1; i >= 0; i--)
    {
        acc[i] = vec[i];
        auto const index = i + vec[i];
        if (index >= 0 && static_cast<size_t>(index) < n)
        {
            acc[i] += acc[index];
        }
    }

    auto const res = *std::max_element(acc.begin(), acc.end());
    std::cout << res << '\n';
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
