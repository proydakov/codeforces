#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    double x;

    std::cin >> n >> x;

    std::vector<double> vec(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end());

    double total = 0;
    size_t res = 0;

    for(auto it = vec.rbegin(); it != vec.rend(); ++it)
    {
        auto const val = *it;
        total += val;
        if (total / (res + 1) >= x)
        {
            res++;
        }
        else
        {
            break;
        }
    }
    std::cout << res << "\n";
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
