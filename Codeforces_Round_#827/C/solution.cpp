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
        : m_map(rows, std::vector<T>(columns, T{}))
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

template<typename T>
std::ostream& operator<<(std::ostream& os, matrix<T> const& m)
{

    for(int64_t y = 0; y < m.y(); y++)
    {
        for(int64_t x = 0; x < m.x(); x++)
        {
            const auto& c = m[{x, y}];
            os << c;
        }
        os << '\n';
    }
    return os;
}

void solve()
{
    constexpr size_t s = 8;

    matrix<char> map(s, s);
    map.read();

    //std::cout << map;

    for(size_t x = 0; x < s; x++)
    {
        size_t b{};
        for(size_t y = 0; y < s; y++)
        {
            const char c = map[{x, y}];
            if(c == 'B')
            {
                b++;
            }
        }

        if (b == s)
        {
            std::cout << "B\n";
            return;
        }
    }

    for(size_t y = 0; y < s; y++)
    {
        size_t r{};
        for(size_t x = 0; x < s; x++)
        {
            const char c = map[{x, y}];
            if (c == 'R')
            {
                r++;
            }
        }

        if (r == s)
        {
            std::cout << "R\n";
            return;
        }
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
