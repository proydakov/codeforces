#include <cmath>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t a, b, c;
    std::cin >> a >> b >> c;

    std::vector<std::int64_t> vec(3);
    vec[0] = a;
    vec[1] = b;
    vec[2] = c;

    std::sort(vec.begin(), vec.end());

    auto const base = vec.back();
    auto const delta = vec[1] - vec[0];
    auto const val = std::sqrt(base * base + delta * delta);

    std::cout << static_cast<std::int64_t>(std::ceil(val)) << '\n';
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
