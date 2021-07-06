#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int t1, t2, t3, t4;
    std::cin >> t1 >> t2 >> t3 >> t4;

    int const t11 = std::max(t1, t2);
    int const t22 = std::max(t3, t4);

    int const min = std::min(t11, t22);
    int const max = std::max(t11, t22);

    std::vector<int> data{t1, t2, t3, t4};
    std::sort(data.begin(), data.end());

    if (min == data[2] && max == data[3])
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
