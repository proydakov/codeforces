#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    int res{};
    auto const last = str.size() - 1;
    for(size_t i = 0; i < str.size(); i++)
    {
        auto const c = static_cast<int>(str[i] - '0');
        auto delta = c;
        if (c && i != last)
        {
            delta++;
        }
        res += delta;
    }

    std::cout << res << '\n';
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
