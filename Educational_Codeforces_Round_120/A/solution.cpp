#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::vector<int64_t> vec(3);
    for(auto& e : vec) std::cin >> e;

    std::sort(vec.begin(), vec.end());

    bool const eq_and_small_even = vec[0] % 2 == 0 && vec[1] == vec[2];
    bool const eq_and_big_even = vec[0] == vec[1] && vec[2] % 2 == 0;
    bool const sum_of_small = vec[0] + vec[1] == vec[2];

    if (eq_and_small_even || eq_and_big_even || sum_of_small)
    {
        std::cout << "YES\n";
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
