#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    std::string str;
    std::cin >> str;

    std::string result;
    result.reserve(result.size());
    result.push_back(str.front());

    for(size_t i = 1; i < str.size() - 1; i += 2)
    {
        result.push_back(str[i]);
    }

    result.push_back(str.back());

    std::cout << result << "\n";
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
