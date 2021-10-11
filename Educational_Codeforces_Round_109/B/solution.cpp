#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> vec(n);
    for(auto& v : vec) std::cin >> v;

    if (std::is_sorted(vec.begin(), vec.end()))
    {
        std::cout << 0;
    }
    else if(vec.front() == 1 || vec.back() == static_cast<int>(n))
    {
        std::cout << 1;
    }
    else if(vec.front() == static_cast<int>(n) && vec.back() == 1)
    {
        std::cout << 3;
    }
    else
    {
        std::cout << 2;
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
