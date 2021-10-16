#include <vector>
#include <numeric>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    long n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    auto count0 = std::count(vec.begin(), vec.end(), 0);
    auto count1 = n - count0;

    if (count1 <= n / 2)
    {
        std::cout << count0 << '\n';
        for(long i = 0; i < count0; i++)
        {
            std::cout << "0 ";
        }
        std::cout << '\n';
    }
    else
    {
        if(count1 % 2 == 1)
        {
            count1--;
        }

        std::cout << count1 << '\n';
        for(long i = 0; i < count1; i++)
        {
            std::cout << "1 ";
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
