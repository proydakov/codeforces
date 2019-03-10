#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int t = 0;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::int64_t a = 0;
        std::int64_t b = 0;
        std::int64_t k = 0;

        std::cin >> a;
        std::cin >> b;
        std::cin >> k;

        std::int64_t d = k / 2;
        std::int64_t res = d * a - d * b + (k % 2 == 0 ? 0 : a);

        std::cout << res << std::endl;
    }

    return 0;
}
