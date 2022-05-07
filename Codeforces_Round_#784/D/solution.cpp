#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <string_view>

void solve()
{
    size_t size;
    std::cin >> size;

    std::string str;
    std::cin >> str;

    std::string_view view(str);
    size_t from = 0;

    while(from != std::string_view::npos)
    {
        auto const index = view.find('W', from);
        auto const sub = view.substr(from, index - from);
        from = index != std::string_view::npos ? index + 1 : std::string_view::npos;
        if(!sub.empty())
        {
            size_t rc{};
            size_t bc{};
            for(auto const c : sub)
            {
                if('R' == c)
                {
                    rc++;
                }
                else if('B' == c)
                {
                    bc++;
                }
            }
            if (sub.size() == 1 || rc == 0 || bc == 0)
            {
                std::cout << "NO\n";
                return;
            }
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
