#include <string>
#include <vector>
#include <numeric>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> avec;
    std::vector<int> bvec;
    for(size_t i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;
        if (val % 2 == 0)
        {
            avec.push_back(val);
        }
        else
        {
            bvec.push_back(val);
        }
    }

    avec.insert(avec.end(), bvec.begin(), bvec.end());

    size_t res = 0;
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = i + 1; j < n; j++)
        {
            auto x = avec[i];
            auto y = avec[j] * 2;
            if (std::gcd(x, y) > 1)
            {
                res++;
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
