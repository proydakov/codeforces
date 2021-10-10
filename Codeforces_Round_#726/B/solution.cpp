#include <vector>
#include <utility>
#include <cstdint>
#include <iostream>
#include <algorithm>

using point_t = std::pair<std::int64_t, std::int64_t>;

struct solution
{
    solution(std::int64_t i, point_t ip1, point_t ip2)
        : distance(i), p1(ip1), p2(ip2)
    {
    }

    std::int64_t distance{};
    point_t p1{};
    point_t p2{};
};

bool operator<(const solution& s1, const solution& s2)
{
    return s1.distance < s2.distance;
}

void solve()
{
    std::int64_t n, m, x, y;
    std::cin >> n >> m >> x >> y;

    std::vector<solution> vec;
    vec.emplace_back(x - 1 + y - 1, point_t{n, 1}, point_t{1, m});
    vec.emplace_back(std::abs(n - x) + std::abs(m - y), point_t{n, 1}, point_t{1, m});
    vec.emplace_back(x - 1 + std::abs(m - y), point_t{1, 1}, point_t{n, m});
    vec.emplace_back(std::abs(n - x) + y - 1, point_t{1, 1}, point_t{n, m});

    std::sort(vec.begin(), vec.end());

    std::cout << vec.front().p1.first << ' ' << vec.front().p1.second << ' ' << vec.front().p2.first << ' ' << vec.front().p2.second << '\n';
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
