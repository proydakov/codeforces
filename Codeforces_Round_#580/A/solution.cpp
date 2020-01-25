#include <cstdint>
#include <iostream>

#include <vector>
#include <algorithm>
#include <unordered_set>

int main()
{
    std::ios::sync_with_stdio(false);

    int an;
    std::cin >> an;
    std::vector<int> avec(an);
    std::unordered_set<int> aset;
    aset.reserve(an);
    for(int i = 0; i < an; i++)
    {
        std::cin >> avec[i];
        aset.insert(avec[i]);
    }

    int bn;
    std::cin >> bn;
    std::vector<int> bvec(bn);
    std::unordered_set<int> bset;
    bset.reserve(bn);
    for(int i = 0; i < bn; i++)
    {
        std::cin >> bvec[i];
        bset.insert(bvec[i]);
    }

    for(auto a : avec)
    {
        for(auto b : bvec)
        {
            auto n = a + b;
            if (aset.count(n) == 0 and bset.count(n) == 0)
            {
                std::cout << a << ' ' << b << std::endl;
                return 0;
            }
        }
    }

    return 0;
}
