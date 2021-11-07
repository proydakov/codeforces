#include <string>
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

    bool win = true;
    bool found = false;

    for(auto const e : vec)
    {
        if (e > 1)
        {
            found = true;
            break;
        }
        else
        {
            win = !win;
        }
    }

    if (found)
    {
        std::cout << (win ? "First\n" : "Second\n");
    }
    else
    {
        std::cout << (n % 2 ? "First\n" : "Second\n");
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
