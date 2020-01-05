#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::int32_t n = 0;
    std::cin >> n;

    std::int32_t cnt = 0;
    for (std::int32_t i = 0; i < n; i++)
    {
        std::int32_t val = 0;
        std::cin >> val;
        if (val % 2 == 0)
        {
            cnt++;
        }
    }

    std::cout << std::min(cnt, n - cnt) << std::endl;

    return 0;
}
