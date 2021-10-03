#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, k;
    std::cin >> n >> k;

    std::vector<std::int64_t> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    size_t c = 0;
    size_t j = 0;

    auto const l = n - 1; 
    while(c < k && j != l)
    {
        if (vec[j] > 0)
        {
            vec[j]--;
            vec[l]++;
            c++;
        }
        else
        {
            j++;
        }
    }

    for(auto const v : vec)
    {
        std::cout << v << ' ';
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
