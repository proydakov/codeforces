#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_set>

void solve()
{
    int n, m;
    std::cin >> n >> m;

    std::unordered_set<int> vert, horz;
    vert.reserve(n);
    horz.reserve(m);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int val;
            std::cin >> val;
            if (val == 1)
            {
                vert.insert(i);
                horz.insert(j);
            }
        }
    }

    int counter = std::min(n - vert.size(), m - horz.size());

    std::cout << (counter % 2 == 0 ? "Vivek" : "Ashish") << "\n";
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
