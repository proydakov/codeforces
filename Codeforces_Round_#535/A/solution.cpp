#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::int64_t l1 = 0;
        std::int64_t r1 = 0;
        std::int64_t l2 = 0;
        std::int64_t r2 = 0;

        std::cin >> l1;
        std::cin >> r1;
        std::cin >> l2;
        std::cin >> r2;

        std::int64_t a = l1;
        std::int64_t b = l2;

        if (l1 == l2)
        {
            b = r2;
        }
        std::cout << a << ' ' << b << std::endl;
    }

    return 0;
}
