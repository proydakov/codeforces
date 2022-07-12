#include <set>
#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t size;
    std::cin >> size;

    std::string str;
    std::cin >> str;

    int64_t counter{};
    std::set<char> set;
    for(auto const c : str)
    {
        auto const [_, res] = set.insert(c);
        if (res)
        {
            counter += 2;
        }
        else
        {
            counter += 1;
        }
    }

    std::cout << counter << '\n';
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
