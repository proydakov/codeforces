#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    bool found = false;
    for(size_t i = 1; i < n; i++)
    {
        if (vec[i] != vec[0])
        {
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << n << '\n';
    }
    else
    {
        std::cout << "1\n";
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
