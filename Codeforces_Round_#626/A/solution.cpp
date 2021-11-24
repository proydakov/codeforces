#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    if (vec.size() == 1 && vec.back() % 2 == 1)
    {
        std::cout << "-1\n";
    }
    else
    {
        std::vector<size_t> index_0;
        std::vector<size_t> index_1;

        for(size_t i = 0; i < n; i++)
        {
            auto const e = vec[i];

            if (e % 2 == 0)
            {
                index_0.push_back(i + 1);
            }
            else
            {
                index_1.push_back(i + 1);
            }

            if (index_0.size() == 1 || index_1.size() == 2)
            {
                break;
            }
        }

        if (not index_0.empty())
        {
            std::cout << "1\n" << index_0.back() << "\n";
        }
        else
        {
            std::cout << "2\n" << index_1.front() << ' ' << index_1.back() << "\n";
        }
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
