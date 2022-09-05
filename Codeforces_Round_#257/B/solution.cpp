#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int64_t x, y;
    std::cin >> x >> y;

    std::vector<int64_t> vec(7, 0);
    vec[1] = x;
    vec[2] = y;
    vec[3] = y - x;
    vec[4] = -x;
    vec[5] = -y;
    vec[6] = x - y;

    constexpr int64_t MAX = 1000000007;
    for(auto& e : vec)
    {
        e = e % MAX;
        if (e < 0)
        {
            e += MAX;
        }
    }

    size_t n;
    std::cin >> n;
    n -= 1;
    n = n % 6;
    n += 1;

    std::cout << vec[n] << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
