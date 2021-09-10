#include <cstdint>
#include <iostream>
#include <unordered_map>

void solve()
{
    size_t n;
    std::cin >> n;

    std::unordered_map<int, size_t> map;
    map.reserve(n);

    int64_t res{};

    for(size_t i = 0; i < n; i++)
    {
        int32_t val;
        std::cin >> val;
        val -= i;

        auto& item = map[val];
        res += item;
        item += 1;
    }

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
