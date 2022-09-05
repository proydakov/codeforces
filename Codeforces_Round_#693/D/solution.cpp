#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <functional>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end(), std::greater<int64_t>{});

    int64_t res{};

    for(size_t i = 0; i < n; i++)
    {
        auto const e = vec[i];

        if (i % 2 == 0)
        {
            if (e % 2 == 0)
            {
                res += e;
            }
        }
        else
        {
            if (e % 2 == 1)
            {
                res -= e;
            }
        }
    }

    if (res == 0)
    {
        std::cout << "Tie";
    }
    else if (res > 0)
    {
        std::cout << "Alice";
    }
    else
    {
        std::cout << "Bob";
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
