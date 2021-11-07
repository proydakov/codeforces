#include <vector>
#include <numeric>
#include <cstdint>
#include <iostream>
#include <algorithm>

std::uint64_t sum(std::uint64_t num)
{
    std::uint64_t res{};

    for (;num > 0; num /= 10)
    {
        res += num % 10;
    }

    return res;
}

void solve()
{
    std::uint64_t val;
    std::cin >> val;

    for(;std::gcd(val, sum(val)) == 1; val++);

    std::cout << val << '\n';
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
