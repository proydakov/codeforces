#include <vector>
#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::int64_t n, a, b;
    std::cin >> n >> a >> b;

    std::string str;
    std::cin >> str;

    if (b >= 0)
    {
        auto const res = n * (a + b);
        std::cout << res << '\n';
    }
    else
    {
        std::vector<std::int64_t> vec;
        vec.reserve(n);
        {
            char c = str.back();
            std::int64_t count = 0;

            while (not str.empty())
            {
                if (str.back() == c)
                {
                    count++;
                    str.pop_back();
                }
                else
                {
                    vec.push_back(count);

                    c = str.back();
                    count = 0;
                }
            }
            vec.push_back(count);
        }

        std::int64_t res = 0;

        while (vec.size() > 2)
        {
            auto it = vec.end() - 2;
            auto const next = *it;
            res += next * a + b;
            vec.erase(it);
            auto const back = vec.back();
            vec.pop_back();
            vec.back() += back;
        }

        for (auto const e : vec)
        {
            res+= e * a + b;
        }

        std::cout<< res << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
