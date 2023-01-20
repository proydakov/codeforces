#include <array>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::array<int, 4> array;
    array.fill(0);

    std::cin >> array[0] >> array[1] >> array[2] >> array[3];

    auto const d1 = std::distance(array.begin(), std::max_element(array.begin(), array.end()));
    auto const d2 = std::distance(array.begin(), std::min_element(array.begin(), array.end()));
    if ((d1 + d2) == 3)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
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
