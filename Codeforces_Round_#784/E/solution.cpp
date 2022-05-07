#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_map>

void solve()
{
    size_t size;
    std::cin >> size;

    std::unordered_map<std::string, int64_t> map;
    map.reserve(size);
    std::vector<int64_t> vec1(256, 0);
    std::vector<int64_t> vec2(256, 0);

    for(size_t i = 0; i < size; i++)
    {
        std::string str;
        std::cin >> str;

        map[str] += 1;

        vec1[static_cast<size_t>(str.front())] += 1;
        vec2[static_cast<size_t>(str.back()) ] += 1;
    }

    int64_t total{};

    for(auto const& [k, v] : map)
    {
        int64_t t1 = vec1[static_cast<size_t>(k.front())] - v;
        int64_t t2 = vec2[static_cast<size_t>(k.back() )] - v;

        total += (t1 + t2) * v;
    }

    std::cout << (total / 2) << "\n";
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
