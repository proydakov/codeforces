#include <vector>
#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> data(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    std::vector<int> result;
    result.reserve(n);
    for(auto const val : data)
    {
        if (val % 2 == 1)
        {
            result.emplace_back(val);
        }
    }

    for(auto const val : data)
    {
        if (val % 2 == 0)
        {
            result.emplace_back(val);
        }
    }

    for(auto const val : result)
    {
        std::cout << val << ' ';
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
