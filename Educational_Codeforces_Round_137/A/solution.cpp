#include <set>
#include <map>
#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

bool contains(std::set<char> const& s1, std::map<char, int> const& s2)
{
    if(s2.size() != 2)
    {
        return false;
    }

    for(auto const [c, v] : s2)
    {
        if (v != 2)
        {
            return false;
        }
    }

    for(auto const [c, _] : s2)
    {
        if (s1.contains(c))
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    size_t n;
    std::cin >> n;

    std::set<char> black;
    for(size_t i = 0; i < n; i++)
    {
        char c;
        std::cin >> c;
        black.insert(c);
    }

    int64_t res{};
    for(size_t i = 0; i <= 9999; i++)
    {
        std::string str(std::to_string(i));

        while(str.length() < 4)
        {
            str = "0" + str;
        }

        std::map<char, int> map;
        for(auto c : str)
        {
            map[c] += 1;
        }
        if (contains(black, map))
        {
            res++;
        }
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
