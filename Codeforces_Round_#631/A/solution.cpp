#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n, x;
    std::cin >> n >> x;

    std::vector<int> vec(n);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    size_t res = 0;

    int next = 1;
    for(size_t i = 0; i < vec.size();)
    {
        auto const e = vec[i];
        if (e == next)
        {
            res++;
            next++;
            i++;
        }
        else if(x > 0)
        {
            res++;
            next++;
            x--;
        }
        else
        {
            break;
        }
    }

    res += x;

    std::cout << res << '\n';
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
