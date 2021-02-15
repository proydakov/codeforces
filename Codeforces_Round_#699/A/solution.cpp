#include <map>
#include <cstdint>
#include <iostream>

void solve()
{
    int x, y;
    std::cin >> x >> y;

    std::string str;
    std::cin >> str;

    std::map<char, int> map;
    for(auto const c : str)
    {
        map[c] += 1;
    }

    bool valid = true;
    if (x < 0)
    {
        valid &= (map['L'] >= -x);
    }
    else
    {
        valid &= (map['R'] >= x);
    }

    if (y < 0)
    {
        valid &= (map['D'] >= -y);
    }
    else
    {
        valid &= (map['U'] >= y);
    }

    if (valid)
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
