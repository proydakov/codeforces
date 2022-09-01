#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

template<typename T>
using point = std::pair<T, T>;

template<typename T>
struct matrix
{
    matrix(size_t rows, size_t columns)
        : m_map(rows, std::vector<int>(columns, T{}))
        , m_rows(rows)
        , m_columns(columns)
    {
    }

    int64_t r() const
    {
        return m_rows;
    }

    int64_t c() const
    {
        return m_columns;
    }

    int64_t y() const
    {
        return m_rows;
    }

    int64_t x() const
    {
        return m_columns;
    }

    template<typename T1 = T>
    void read()
    {
        for(size_t y = 0; y < m_rows; y++)
        {
            for(size_t x = 0; x < m_columns; x++)
            {
                T1 c;
                std::cin >> c;

                m_map[y][x] = static_cast<T>(c);
            }
        }

    }

    auto& impl()
    {
        return m_map;
    }

    auto const& impl() const
    {
        return m_map;
    }

    T& operator[](point<int64_t> key)
    {
        return m_map[std::get<1>(key)][std::get<0>(key)];
    }

    T const& operator[](point<int64_t> key) const
    {
        return m_map[std::get<1>(key)][std::get<0>(key)];
    }

private:
    std::vector<std::vector<T>> m_map;
    size_t m_rows;
    size_t m_columns;
};

template<typename Cond>
bool is_valid_cell(matrix<int> const& map, int64_t x1, int64_t y1, Cond cond)
{
    for(int64_t y = std::max(y1 - 1, int64_t(0)); y < std::min(y1 + 2, map.y()); y++)
    {
        for(int64_t x = std::max(x1 - 1, int64_t(0)); x < std::min(x1 + 2, map.x()); x++)
        {
            if (cond(map[{x, y}]))
            {
                return false;
            }
        }
    }
    return true;
}

bool place(matrix<int> const& map, std::vector<point<int64_t>> const& points)
{
    for(auto const& [x, y] : points)
    {
        if (x >= 0 && x < map.x() && y >= 0 && y < map.y())
        {
            if (map[{x, y}] != '*')
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool solve(matrix<int>& map)
{
    for(int64_t y = 0; y < map.y(); y++)
    {
        for(int64_t x = 0; x < map.x(); x++)
        {
            if (map[{x, y}] == '*')
            {
                std::vector<point<int64_t>> points;

                std::vector<point<int64_t>> p1;
                std::vector<point<int64_t>> p2;
                std::vector<point<int64_t>> p3;
                std::vector<point<int64_t>> p4;

                p1.emplace_back(x    , y);
                p1.emplace_back(x    , y + 1);
                p1.emplace_back(x - 1, y + 1);

                p2.emplace_back(x    , y);
                p2.emplace_back(x    , y + 1);
                p2.emplace_back(x + 1, y + 1);

                p3.emplace_back(x    , y);
                p3.emplace_back(x + 1, y);
                p3.emplace_back(x + 1, y + 1);

                p4.emplace_back(x    , y);
                p4.emplace_back(x    , y + 1);
                p4.emplace_back(x + 1, y);

                if (place(map, p1))
                {
                    points = p1;
                }
                else if (place(map, p2))
                {
                    points = p2;
                }
                else if (place(map, p3))
                {
                    points = p3;
                }
                else if (place(map, p4))
                {
                    points = p4;
                }
                else
                {
                    return false;
                }

                for(auto const& [x1, y1] : points)
                {
                    map[{x1, y1}] = '3';
                }

                for(auto const& [x1, y1] : points)
                {
                    if (!is_valid_cell(map, x1, y1, [](int c){
                        return c == '*';
                    }))
                    {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}

void solve()
{
    size_t n, m;
    std::cin >> n >> m;

    matrix<int> map(n, m);
    map.read<char>();

    if (solve(map))
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
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
