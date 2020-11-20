#include <vector>
#include <cstdint>
#include <iostream>

void solve()
{
    int x, y;
    std::cin >> x >> y;

    int p1, p2;
    std::cin >> p1 >> p2;

    std::vector<std::vector<char>> grid;
    for(int i = 0; i < x; i++)
    {
        std::vector<char> line;
        line.resize(y);
        for(int j = 0; j < y; j++)
        {
            std::cin >> line[j];
        }
        grid.emplace_back(std::move(line));
    }

    if (2 * p1 < p2)
    {
        int count = 0;
        for(int i = 0; i < x; i++)
        {
            for(char c : grid[i])
            {
                if (c == '.')
                {
                    count++;
                }
            }
        }
        std::cout << (count * p1) << "\n";
    }
    else
    {
        int c1 = 0;
        int c2 = 0;
        for(int i = 0; i < x; i++)
        {
            auto& line = grid[i];
            for(int j = 0; j < y - 1; j++)
            {
                if (line[j] == '.' && line[j + 1] == '.')
                {
                    c2++;
                    line[j] = '*';
                    line[j + 1] = '*';
                    j++;
                }
                else if (line[j] == '.')
                {
                    c1++;
                    line[j] = '*';
                }
            }
            if (line.back() == '.')
            {
                c1++;
                line.back() = '*';
            }
        }

        std::cout << (p1 * c1 + p2 * c2) << "\n";
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
