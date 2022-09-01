#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    std::vector<int64_t> cur(n, 0);
    std::vector<int64_t> max(n, 0);

    int64_t cur_sum = 0;
    int64_t max_sum = 0;
    for(size_t i = 0, size = str.size(); i < size; i++)
    {
        if (str[i] == 'L')
        {
            cur[i] = i;
            max[i] = std::max(i, size - i - 1);
        }
        else
        {
            cur[i] = size - i - 1;
            max[i] = std::max(i, size - i - 1);
        }

        cur_sum += cur[i];
        max_sum += max[i];
    }

    size_t print{};
    {
        int64_t i = 0;
        int64_t e = n - 1;

        while(i < e)
        {
            if (cur[i] == max[i])
            {
                i++;
            }
            else if(cur[e] == max[e])
            {
                e--;
            }
            else
            {
                auto const s1 = cur_sum - cur[i] + max[i];
                auto const s2 = cur_sum - cur[e] + max[e];
                auto const max = std::max(s1, s2);
                cur_sum = max;

                if (s1 > s2)
                {
                    i++;
                }
                else
                {
                    e--;
                }

                std::cout << max << ' ';
                print++;
            }
        }
    }

    for(size_t i = print; i < n; i++)
    {
        std::cout << max_sum << ' ';
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
