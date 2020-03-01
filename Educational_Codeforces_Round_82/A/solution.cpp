#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <string_view>

void solve()
{
    std::string str;
    std::cin >> str;

    std::string_view view(str);
    view.remove_prefix(std::min(view.find_first_of('1'), view.size()));
    if(auto trim_pos = view.find_last_of('1'); trim_pos != view.npos)
        view.remove_suffix(view.size() - trim_pos - 1);

    std::cout << std::count(view.begin(), view.end(), '0') << "\n";
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
