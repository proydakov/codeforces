#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::string num;
    std::cin >> num;

    int prev_summ = 9;
    for(auto const c : num)
    {
        int const val = c - '0';
        if (val + 1 == prev_summ)
        {
            prev_summ = val;
            std::cout << 0;
        }
        else
        {
            prev_summ = val + 1;
            std::cout << 1;
        }
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
