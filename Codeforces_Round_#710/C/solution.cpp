#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <string_view>

size_t solve(std::string_view s1, std::string_view s2)
{
    if (s2.length() > s1.length())
    {
        std::swap(s1, s2);
    }

    size_t res{s1.length() + s2.length()};

    for(size_t i = 0; i < s1.length(); i++)
    {
        std::string_view view(s1);
        view.remove_prefix(i);
        while(view.length() > 0)
        {
            if (s2.find(view) != std::string_view::npos)
            {
                res = std::min(res, s1.length() - view.length() + s2.length() - view.length());
            }
            view.remove_suffix(1);
        }
    }

    for(size_t i = 0; i < s1.length(); i++)
    {
        std::string_view view(s1);
        view.remove_suffix(i);
        while(view.length() > 0)
        {
            if (s2.find(view) != std::string_view::npos)
            {
                res = std::min(res, s1.length() - view.length() + s2.length() - view.length());
            }
            view.remove_prefix(1);
        }
    }

    return res;
}

void solve()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    std::cout << solve(s1, s2) << '\n';
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
