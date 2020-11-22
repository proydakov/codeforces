#include <cstdint>
#include <iostream>

#include <cmath>
#include <vector>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    std::vector<int> result;
    result.reserve(4);

    int total = 1;

    int num = n;
    for(int i = 2, last = std::sqrt(n); i <= last && result.size() < 2; i++)
    {
        if (num % i == 0)
        {
            total *= i;
            result.emplace_back(i);
            num /= i;
        }
    }

    if(result.size() == 2 && n / total > result.back())
    {
        result.emplace_back(n / total);
        std::cout << "YES\n";
        for(auto const c : result)
        {
            std::cout << c << ' ';
        }
        std::cout << "\n";
    }
    else
    {
        std::cout << "NO\n";
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
