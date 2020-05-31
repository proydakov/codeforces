#include <limits>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    int data[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    std::sort(data, data + n);

    int result = std::numeric_limits<int>::max();
    for(int i = 0; i < n - 1; i++)
    {
        int delta = data[i + 1] - data[i];
        result = std::min(delta, result);
    }
    std::cout << result << '\n';
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
