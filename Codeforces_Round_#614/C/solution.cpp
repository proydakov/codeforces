#include <array>
#include <vector>
#include <cstdint>
#include <iostream>

using element_t = std::uint8_t;
using line_t = std::array<element_t, 2>;

element_t neighbor_line(std::vector<line_t>const & data, int x, int y)
{
    return data[y][x];
}

element_t neighbor_up(std::vector<line_t>const & data, int x, int y)
{
    y++;
    return data[y][x];
}

element_t neighbor_down(std::vector<line_t>const & data, int x, int y)
{
    y--;
    return data[y][x];
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, q;
    std::cin >> n >> q;

    int barriers = 0;
    line_t def{};
    std::vector<line_t> data(n + 2, def);
    for(int i = 0; i < q; i++)
    {
        int x, y;
        std::cin >> x >> y;
        x--;

        int const x1 = (x + 1) % 2;

        auto& prev_value = data[y][x];
        if (prev_value == 0)
        {
            prev_value = 1;
            if (neighbor_line(data, x1, y) == 1)
            {
                barriers++;
            }
            if (neighbor_up(data, x1, y) == 1)
            {
                barriers++;
            }
            if (neighbor_down(data, x1, y) == 1)
            {
                barriers++;
            }
        }
        else
        {
            prev_value = 0;
            if (neighbor_line(data, x1, y) == 1)
            {
                barriers--;
            }
            if (neighbor_up(data, x1, y) == 1)
            {
                barriers--;
            }
            if (neighbor_down(data, x1, y) == 1)
            {
                barriers--;
            }
        }

        std::cout << (barriers == 0 ? "Yes" : "No") << '\n';
    }

    return 0;
}
