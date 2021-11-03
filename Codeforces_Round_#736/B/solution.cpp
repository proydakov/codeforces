#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t n;
    std::cin >> n;

    std::string line1, linen;
    std::cin >> line1 >> linen;

    size_t res{};

    for(std::int64_t i = 0; i < n; i++)
    {
        auto const l1 = line1[i];
        auto const ln = linen[i];
        if (ln == '1')
        {
            if(l1 == '0')
            {
                res++;
            }
            else if(i - 1 >= 0 && line1[i - 1] == '1')
            {
                res++;
                line1[i - 1] = '0';
            }
            else if(i + 1 < n && line1[i + 1] == '1')
            {
                res++;
                line1[i + 1] = '0';
            }
        }
    }

    std::cout << res << '\n';
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
