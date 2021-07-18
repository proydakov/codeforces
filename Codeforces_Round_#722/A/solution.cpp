#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t size;
    std::cin >> size;

    std::vector<int> data(size);
    for(size_t i = 0; i < size; i++)
    {
        std::cin >> data[i];
    }

    auto const min = *std::min_element(data.begin(), data.end());
    auto const res = std::count_if(data.begin(), data.end(), [min](auto const val){
        return val > min;
    });
    std::cout << res << "\n";
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
