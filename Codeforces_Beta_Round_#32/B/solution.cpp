#include <string>
#include <cstdint>
#include <iostream>

void solve()
{
    std::string str;
    std::cin >> str;

    std::string result;
    result.reserve(str.size());

    for(size_t i = 0; i < str.size(); i++)
    {
        if ('.' == str[i])
        {
            result.push_back('0');
        }
        else
        {
            if('.' == str[i + 1])
            {
                result.push_back('1');
            }
            else
            {
                result.push_back('2');
            }
            i++;
        }
    }

    std::cout << result << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solve();

    return 0;
}
