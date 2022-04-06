#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::size_t n;
    std::cin >> n;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());

    if (vec.size() == 1)
    {
        std::cout << (vec.front() > 1 ? "NO\n" : "YES\n");
    }
    else
    {
        std::cout << (vec[vec.size() - 1] - vec[vec.size() - 2] > 1 ? "NO\n" : "YES\n");
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
