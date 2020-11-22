#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    if (static_cast<size_t>(std::count(data.begin(), data.end(), data.back())) == data.size())
    {
        std::cout << "-1\n";
    }
    else
    {
        auto result = std::max_element(data.begin(), data.end());
        if (result == data.begin())
        {
            while(*result == *(result + 1))
            {
                result++;
            }
        }
        std::cout << (1 + std::distance(data.begin(), result)) << "\n";
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
