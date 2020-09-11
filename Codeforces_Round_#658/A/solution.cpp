#include <cstdint>
#include <optional>
#include <iostream>
#include <unordered_set>

void solve()
{
    size_t s1, s2;
    std::cin >> s1 >> s2;

    std::unordered_set<int> set;
    for(size_t i = 0; i < s1; i++)
    {
        int val;
        std::cin >> val;

        set.insert(val);
    }

    std::optional<int> res;
    for(size_t i = 0; i < s2; i++)
    {
        int val;
        std::cin >> val;

        if (set.count(val) > 0)
        {
            res = val;
        }
    }

    if (res)
    {
        std::cout << "YES\n1 " << *res << "\n";
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
