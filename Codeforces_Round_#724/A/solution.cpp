#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    bool neg = false;

    std::vector<int> vec(n);
    for(auto& e : vec)
    {
        std::cin >> e;
        if (e < 0)
        {
            neg = true;
        }
    }
    
    if (neg)
    {
        std::cout << "NO\n";
    }
    else
    {
        std::cout << "YES\n102\n";
        for(size_t i = 0; i <= 101; i++)
        {
            std::cout << i << ' ';
        }
        std::cout << '\n';
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
