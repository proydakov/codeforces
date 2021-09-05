#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

size_t solve(size_t n)
{
    if (n < 2)
    {
        return 0;
    }

    auto calc = [](auto step)
    {
        auto constexpr single = 2ul;
        return (step * single) + (step - 1);
    };

    auto step = 1ul;
    auto total = 0ul;
    auto next = calc(step);

    while(total + next <= n)
    {
       total += next;
       step += 1;
       next = calc(step);
    }

    return total;
}

void solve()
{
    size_t n;
    std::cin >> n;

    size_t count = 0;
    while(n >= 2)
    {
        auto const val = solve(n);
        n -= val;
        count++;
    }

    std::cout << count << "\n";
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
