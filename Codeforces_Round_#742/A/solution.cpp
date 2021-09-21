#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    std::string result;
    result.reserve(str.size());
    for(auto const c : str)
    {
        auto t = c;
        if (t == 'U')
        {
            t = 'D';
        }
        else if (t == 'D')
        {
            t = 'U';
        }
        result.push_back(t);
    }

    std::cout << result << '\n';
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
