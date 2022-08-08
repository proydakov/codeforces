#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t t;
    std::cin >> t;

    std::vector<size_t> vec(4, 0);
    for(size_t i = 1; i < 4; i++)
    {
        std::cin >> vec[i];
    }

    size_t count = 0;
    while(t != 0)
    {
        count++;
        t = vec[t];
    }

    std::cout << (count == 3 ? "YES\n" : "NO\n");
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
