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

    if (vec.front() == vec.back())
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n";
        std::cout << vec.back() << ' ';
        vec.pop_back();
        for(auto const& e : vec)
        {
            std::cout << e << ' ';
        }
        std::cout << '\n';
    }
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
