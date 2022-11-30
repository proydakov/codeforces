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
    for(auto& e : vec) std::cin >> e;

    std::vector<int64_t> copy(vec);
    std::sort(copy.begin(), copy.end());

    for(auto const c : vec)
    {
        if (c == copy.back())
        {
            std::cout << (c - copy[n - 2]) << ' ';
        }
        else
        {
            std::cout << (c - copy.back()) << ' ';
        }
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
