#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

struct vertex_t
{
    size_t x{};
    size_t y{};
};

bool operator==(vertex_t v1, vertex_t v2)
{
    return v1.x == v2.x && v1.y == v2.y;
}

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<vertex_t> vec;
    vec.reserve(4);

    for(size_t i = 1; i <= n; i++)
    {
        for(size_t j = 1; j <= n; j++)
        {
            char c;
            std::cin >> c;

            if ('*' == c)
            {
                vec.push_back(vertex_t{i, j});
            }
        }
    }

    auto const p1 = vec.front();
    auto const p2 = vec.back();
    if (p1.x == p2.x)
    {
        if (p1.x == n)
        {
            vec.push_back(vertex_t{p1.x - 1, p1.y});
            vec.push_back(vertex_t{p2.x - 1, p2.y});
        }
        else
        {
            vec.push_back(vertex_t{p1.x + 1, p1.y});
            vec.push_back(vertex_t{p2.x + 1, p2.y});
        }
    }
    else if(p1.y == p2.y)
    {
        if (p1.y == n)
        {
            vec.push_back(vertex_t{p1.x, p1.y - 1});
            vec.push_back(vertex_t{p2.x, p2.y - 1});
        }
        else
        {
            vec.push_back(vertex_t{p1.x, p1.y + 1});
            vec.push_back(vertex_t{p2.x, p2.y + 1});
        }
    }
    else
    {
        vec.push_back(vertex_t{p1.x, p2.y});
        vec.push_back(vertex_t{p2.x, p1.y});
    }

    for(size_t i = 1; i <= n; i++)
    {
        for(size_t j = 1; j <= n; j++)
        {
            auto const it = std::find(vec.begin(), vec.end(), vertex_t{i, j});
            std::cout << (it != vec.end() ? '*' : '.');
        }
        std::cout << '\n';
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
