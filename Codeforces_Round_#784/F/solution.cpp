#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t size;
    std::cin >> size;

    std::vector<int64_t> vec(size, 0);
    for(auto& e : vec) std::cin >> e;

    size_t i = 0, j = size - 1;

    size_t total{};

    size_t counter{};
    int64_t ci = {};
    int64_t cj = {};
    while(i <= j)
    {
        if (ci <= cj)
        {
            ci += vec[i];
            i++;
        }
        else
        {
            cj += vec[j];
            j--;
        }
        counter++;

        if (ci == cj)
        {
            total = counter;
        }
    }

    std::cout << total << "\n";
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
