#include <array>
#include <cstdint>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int q = 0;
    std::cin >> q;

    for(int i = 0; i < q; i++)
    {
        std::int64_t a = 0;
        std::int64_t b = 0;
        std::int64_t c = 0;

        std::cin >> a;
        std::cin >> b;
        std::cin >> c;

        std::array<std::int64_t, 3> data{a, b, c};
        std::sort(data.begin(), data.end());

        std::int64_t alice = data[1];
        std::int64_t bob = data[0];
        std::int64_t const delta = alice - bob;

        data[2] -= delta;
        bob += delta;

        std::cout << (alice + data[2] / 2) << std::endl;
    }

    return 0;
}
