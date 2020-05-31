#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    constexpr int isize = 2 * 100'000 + 1;
    int hash[isize] = {};

    int max = 0;
    int uniq = 0;
    for(int i = 0; i < n; i++)
    {
        int next;
        std::cin >> next;
        if(0 == hash[next])
        {
            uniq++;
        }
        hash[next]++;
        max = std::max(max, hash[next]);
    }

    if(max > uniq)
    {
        std::cout << uniq;
    }
    else if(uniq > max)
    {
        std::cout << max;
    }
    else
    {
        std::cout << (max - 1);
    }
    std::cout << '\n';
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
