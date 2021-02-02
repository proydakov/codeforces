#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n, d;
    std::cin >> n >> d;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    std::sort(data.begin(), data.end());

    bool cond = true;
    for(auto const e : data)
    {
        if (e > d)
        {
            cond = false;
            break;
        }
    }

    if (cond || data[0] + data[1] <= d)
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
