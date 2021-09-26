#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    std::string s, t;
    std::cin >> s >> t;

    size_t i = 0;
    for(auto const c : t)
    {
        if (c == s.at(i))
        {
            i++;
        }
    }

    std::cout << (i + 1) << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
