#include <stack>
#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

bool is_valid(std::string const& s)
{
    std::stack<char> stack;

    for(auto e : s)
    {
        if (e == '(')
        {
            stack.push(e);
        }
        else
        {
            if (stack.empty())
            {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}

void solve()
{
    std::string str;
    std::cin >> str;

    for(auto const a : {'(', ')'})
    {
        for(auto const b : {'(', ')'})
        {
            for(auto const c : {'(', ')'})
            {
                std::string s(str);

                std::replace(s.begin(), s.end(), 'A', a);
                std::replace(s.begin(), s.end(), 'B', b);
                std::replace(s.begin(), s.end(), 'C', c);

                if (is_valid(s))
                {
                    std::cout << "YES\n";
                    return;
                }
            }
        }
    }

    std::cout << "NO\n";
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
