#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, m;
    std::cin >> n >> m;

    std::string str(m, 'B');
    std::vector<size_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());

    for(auto const e : vec)
    {
        const size_t i1 = e - 1;
        const size_t i2 = m + 1 - e - 1;
        if (i1 <= i2 && str[i1] == 'B')
        {
            str[i1] = 'A';
        }
        else if(i2 < i1 && str[i2] == 'B')
        {
            str[i2] = 'A';
        }
        else if(str[i1] == 'B')
        {
            str[i1] = 'A';
        }
        else
        {
            str[i2] = 'A';
        }
    }

    std::cout << str << '\n';
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
