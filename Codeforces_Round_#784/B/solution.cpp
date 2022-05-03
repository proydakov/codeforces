#include <cstdint>
#include <iostream>
#include <unordered_map>

void solve()
{
    std::unordered_map<int, int> table;

    size_t n;
    std::cin >> n;

    table.reserve(n);

    for(size_t i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;

        table[val] += 1;
    }

    for(auto const [k, v] : table)
    {
        if (v >= 3)
        {
            std::cout << k << "\n";
            return;
        }
    }
    
    std::cout << "-1\n";
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
