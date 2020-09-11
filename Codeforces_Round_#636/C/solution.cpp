#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t size;
    std::cin >> size;

    std::int64_t val;
    std::cin >> val;

    bool prev_sign = val > 0;
    std::int64_t interval = val;

    std::int64_t result = 0;
    
    for(size_t i = 1; i < size; i++)
    {
        std::cin >> val;
        bool current_sign = val > 0;

        if (prev_sign != current_sign)
        {
            result += interval;
            interval = std::numeric_limits<std::int64_t>::min();
        }

        interval = std::max(interval, val);

        prev_sign = current_sign;
    }

    result += interval;

    std::cout << result << "\n";
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
