#include <string>
#include <string_view>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    if (str.size() % 2 == 1)
    {
        std::cout << "NO\n";
        return;
    }

    auto const sv = std::string_view(str);

    auto const s1 = sv.substr(0, sv.size() / 2);
    auto const s2 = sv.substr(sv.size() / 2);

    if (s1 == s2)
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
