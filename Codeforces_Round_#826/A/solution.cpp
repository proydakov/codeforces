#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

struct key
{
    char c{};
    size_t l{};
};

bool operator==(key const& k1, key const& k2)
{
    return k1.c == k2.c && k1.l == k2.l;
}

bool operator<(key const& k1, key const& k2)
{
    if (k1.c == k2.c)
    {
        return k1.c == 'S' ? k1.l > k2.l : k1.l < k2.l;
    }
    return k1.c > k2.c;
}

std::ostream& operator<<(std::ostream& os, key const& k)
{
    os << k.c << ' ' << k.l;
    return os;
}

void solve()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    key const k1{s1.back(), s1.length()};
    key const k2{s2.back(), s2.length()};

    //std::cout << "k1: " << k1 << " k2: " << k2 << '\n';

    if (k1 == k2)
    {
        std::cout << "=\n";
    }
    else if (k1 < k2)
    {
        std::cout << "<\n";
    }
    else
    {
        std::cout << ">\n";
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
