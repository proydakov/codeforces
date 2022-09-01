#include <set>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<std::set<std::string>> vec(3);
    for(size_t i = 0; i < 3; i++)
    {
        for(size_t j = 0; j < n; j++)
        {
            std::string str;
            std::cin >> str;
            vec[i].insert(str);
        }
    }

    for(size_t i = 0; i < 3; i++)
    {
        size_t count{};
        for(auto const& str : vec[i])
        {
            size_t c{};
            for(size_t k = 0; k < 3; k++)
            {
                if (vec[k].count(str))
                {
                    c++;
                }
            }

            if (c == 1)
            {
                count += 3;
            }
            else if (c == 2)
            {
                count += 1;
            }
        }

        std::cout << count << ' ';
    }

    std::cout << '\n';
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
