#include <cstdint>
#include <iostream>

#include <vector>
#include <algorithm>

std::vector<long> g_cache;

void solve()
{
    g_cache.clear();

    long a, b, n;
    std::cin >> a >> b >> n;

    g_cache.push_back(a);
    g_cache.push_back(b);

    std::sort(g_cache.begin(), g_cache.end());

    int solution = 0;

    long current = g_cache.back();
    while(current <= n)
    {
        solution++;
        current = g_cache[g_cache.size() - 2] + g_cache[g_cache.size() - 1];
        g_cache.push_back(current);
    }

    std::cout << solution << "\n";
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
