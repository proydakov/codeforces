#include <string>
#include <numeric>
#include <cstdint>
#include <iostream>
#include <algorithm>

std::string copyN(std::string const& str, size_t size)
{
    std::string res;
    res.reserve(str.size() * size);
    for(size_t i = 0; i < size; i++)
    {
        res.append(str);
    }
    return res;
}
    
std::string find_period(std::string const& str)
{
    for(size_t i = 1; i <= str.size() / 2; i++)
    {
        if (str.size() % i == 0)
        {
            std::string const sub = str.substr(0, i);
            std::string const test = copyN(sub, str.size() / i);

            if (str == test)
            {
                return sub;
            }
        }
    }
    return str;
}

template< class T>
constexpr T noc(T m, T n)
{
    return m * n / std::gcd(m, n); 
}

void solve()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    auto const p1 = find_period(s1);
    auto const p2 = find_period(s2);

    if (p1 == p2)
    {
        auto const psize = p1.size();
        auto const t1 = s1.size() / psize;
        auto const t2 = s2.size() / psize;

        auto const size = noc(t1, t2);
        auto const res = copyN(p1, size);
        std::cout << res << "\n";
    }
    else
    {
        std::cout << "-1\n";
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
