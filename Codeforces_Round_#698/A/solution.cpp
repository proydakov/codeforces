#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    int max = 1;

    int current_val;
    std::cin >> current_val;
    int current_max = 1;

    for(int i = 1; i < n; i++)
    {
        int val;
        std::cin >> val;

        if (val == current_val)
        {
            current_max++;
        }
        else
        {
            max = std::max(max, current_max);
            current_max = 1;
        }
        current_val = val;
    }

    std::cout << std::max(max, current_max) << "\n";
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
