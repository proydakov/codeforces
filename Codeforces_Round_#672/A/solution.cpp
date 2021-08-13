#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> data(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    auto const res = std::is_sorted(data.begin(), data.end(), [](auto const a, auto const b){
        return b <= a;
    });

    std::cout << (res ? "NO" : "YES") << "\n";
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
