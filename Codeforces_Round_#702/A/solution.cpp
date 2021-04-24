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

    int res = 0;
    for(int i = 1; i < n; i++)
    {
        int v1 = std::min(data[i - 1], data[i]) * 2;
        int v2 = std::max(data[i - 1], data[i]);
        while(v1 < v2)
        {
            v1 *= 2;
            res++;
        }
    }

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
