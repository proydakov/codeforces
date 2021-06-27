#include <set>
#include <string>
#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::string str;

    std::cin >> n;
    std::cin >> str;

    auto it = std::unique(str.begin(), str.end());
    str.erase(it, str.end());

    std::set<char> set;

    for(auto const c : str)
    {
        auto [_, res] = set.insert(c);
        if (!res)
        {
            std::cout << "NO\n";
            return;
        }
    }

    std::cout << "YES\n";
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
