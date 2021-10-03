#include <map>
#include <limits>
#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    std::map<char, int> map;

    size_t f_index = 0;
    size_t l_index = 2;
    for(size_t i = f_index; i <= std::min(l_index, str.length()); i++)
    {
        auto const c = str[i];
        map[c] += 1;
    }

    auto const has_all = [&map]()
    {
        return map['1'] > 0 && map['2'] > 0 && map['3'] > 0;
    };

    size_t result = has_all() ? 3 : std::numeric_limits<size_t>::max();

    while (true)
    {
        if (result == 3)
        {
            break;
        }

        if (not has_all())
        {
            l_index++;
            if (l_index >= str.length())
            {
                break;
            }
            map[str[l_index]] += 1;
        }
        else
        {
            map[str[f_index]] -= 1;
            f_index++;
        }

        if (has_all())
        {
            result = std::min(result, l_index + 1 - f_index);
        }
    }

    std::cout << (result != std::numeric_limits<size_t>::max() ? result : 0) << "\n";
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
