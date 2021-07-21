#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> heroes(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> heroes[i];
    }

    std::sort(heroes.begin(), heroes.end());

    auto const min = heroes.front();

    auto const res = std::count_if(heroes.begin(), heroes.end(), [min](auto const val){
        return val > min;
    });

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
