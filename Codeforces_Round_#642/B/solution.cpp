#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n);
    std::vector<int> b(n);

    for(int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }

    std::sort(b.begin(), b.end());

    for(int i = 0; i < k; i++)
    {
        a.push_back(b.back());
        b.pop_back();
    }

    std::sort(a.begin(), a.end());

    int sum = std::accumulate(a.begin() + k, a.end(), 0);
    std::cout << sum << '\n';
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
