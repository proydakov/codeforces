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

    bool has_0 = false;
    bool has_1 = false;
    for(int i = 0; i < n; i++)
    {
        int mark;
        std::cin >> mark;

        if (mark == 0)
        {
            has_0 = true;
        }
        else
        {
            has_1 = true;
        }
    }

    if (std::is_sorted(data.begin(), data.end()) || (has_0 && has_1))
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
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
