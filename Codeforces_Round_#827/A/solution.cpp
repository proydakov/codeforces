#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::vector<int64_t> vec(3);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());
    std::cout << (((vec[0] + vec[1]) == vec[2]) ? "YES\n" : "NO\n");
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
