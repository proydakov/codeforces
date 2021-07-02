#include <set>
#include <vector>
#include <cstdint>
#include <iostream>

void solve()
{
    size_t n;
    std::cin >> n;

    std::vector<int> data(n);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    std::set<int> set;
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = i + 1; j < n; j++)
        {
            int const sq1 = 5'000 * data[i];
            int const sq2 = 5'000 * data[j];

            int const sq = sq2 - sq1;
            set.insert(sq);
        }
    }

    std::cout << set.size() << '\n';
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
