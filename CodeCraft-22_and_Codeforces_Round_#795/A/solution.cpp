#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t size;
    std::cin >> size;

    std::vector<int64_t> vec(size);

    for(auto& e : vec) std::cin >> e;

    size_t even{};
    size_t odd{};

    for(auto const& e : vec)
    {
        if (e % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    std::cout << std::min(even, odd) << '\n';
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
