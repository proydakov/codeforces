#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    size_t c_a{};
    size_t c_b{};
    size_t c_c{};

    for(auto const c : str)
    {
        switch(c)
        {
            case 'A':
                c_a++;
                break;

            case 'B':
                c_b++;
                break;

            case 'C':
                c_c++;
        }
    }

    c_b -= c_a;
    if (c_b < 0)
    {
        goto no;
    }

    c_c -= c_b;
    if (c_c > 0)
    {
        goto no;
    }

    std::cout << "YES\n";
    return;

no:
    std::cout << "NO\n";
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
