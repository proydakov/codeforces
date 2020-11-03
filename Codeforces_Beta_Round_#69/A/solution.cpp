#include <array>
#include <cstdint>
#include <iostream>
#include <algorithm>

std::array simple{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    auto it1 = std::find(simple.begin(), simple.end(), n);
    auto it2 = std::find(simple.begin(), simple.end(), m);

    if (it1 != simple.end() && it2 != simple.end() && std::distance(it1, it2) == 1)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
