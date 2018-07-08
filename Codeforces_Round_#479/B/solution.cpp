#include <string>
#include <iostream>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);

    std::size_t n;
    std::cin >> n;

    std::string str;
    std::cin >> str;

    std::unordered_map<std::string, int> hash;
    for(std::size_t i = 0; i < n - 1; i++)
    {
        std::string const sub = str.substr(i, 2);
        hash[sub]++;
    }

    std::string res;
    int max = 0;
    for(auto const& item : hash)
    {
        if(item.second > max)
        {
            max = item.second;
            res = item.first;
        }
    }
    std::cout << res << std::endl;

    return 0;
}
