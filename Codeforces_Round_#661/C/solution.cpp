#include <cstdint>
#include <iostream>
#include <set>
#include <unordered_map>
#include <algorithm>

void solve()
{
    int size;
    std::cin >> size;

    int array[size];

    std::unordered_map<int, int> val_map;
    for(int i = 0; i < size; i++)
    {
        std::cin >> array[i];
        val_map[array[i]] += 1;
    }

    std::set<int> sum_set;
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            auto const sum = array[i] + array[j];
            sum_set.insert(sum);
        }
    }

    int max_sum = 0;
    for(auto const sum : sum_set)
    {
        int cycle_sum = 0;
        for(auto const [key, val] : val_map)
        {
            auto it = val_map.find(sum - key);
            if (it != val_map.end())
            {
                cycle_sum += std::min(val, it->second);
            }
        }

        max_sum = std::max(max_sum, cycle_sum);
    }

    std::cout << (max_sum / 2) << '\n';
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
