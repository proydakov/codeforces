#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int64_t> vec(n);
    for(auto& e : vec) std::cin >> e;

    for(size_t i = 0; i < n; i++)
    {
        size_t t;
        std::cin >> t;

        std::string input;
        std::cin >> input;

        for(auto const c : input)
        {
            if('D' == c)
            {
                vec[i] += 1;
                if (10 == vec[i])
                {
                    vec[i] = 0;
                }
            }
            else if('U' == c)
            {
                vec[i] -= 1;
                if (vec[i] < 0)
                {
                    vec[i] += 10;
                }
            }
            else
            {
                throw std::runtime_error("invalid input");
            }
        }
    }

    std::cout << vec.front();

    for(size_t i = 1; i < vec.size(); i++)
    {
        std::cout << ' ' << vec[i];
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
