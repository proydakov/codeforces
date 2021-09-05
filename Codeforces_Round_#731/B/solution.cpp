#include <set>
#include <string>
#include <cstdint>
#include <iostream>
#include <optional>

bool uniq_and_linear(std::string const& str)
{
    std::set<char> set;
    for(auto const c : str)
    {
        auto const [_, res ] = set.insert(c);
        if (!res)
        {
            return false;
        }
    }

    if(set.empty())
    {
        return false;
    }

    auto it = set.begin();
    auto prev = *it++;

    for(;it != set.end(); ++it)
    {
        auto const next = *it;
        if (prev + 1 != next)
        {
            return false;
        }
        prev = next;
    }

    return true;
}

bool ordered(std::string const& str)
{
    std::optional<size_t> a_index;
    for(size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a')
        {
            a_index = i;
            break;
        }
    }

    if (!a_index)
    {
        return false;
    }

    char p1 = 'a';
    for(int i = *a_index - 1; i >= 0; i--)
    {
        if(str[i] <= p1)
        {
            return false;
        }
        p1 = str[i];
    }

    char p2 = 'a';
    for(int i = *a_index + 1; i < static_cast<int>(str.size()); i++)
    {
        if(str[i] <= p2)
        {
            return false;
        }
        p2 = str[i];
    }

    return true;
}

void solve()
{
    std::string str;
    std::cin >> str;

    auto const found = uniq_and_linear(str) && ordered(str);
    std::cout << (found ? "YES\n" : "NO\n");
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
