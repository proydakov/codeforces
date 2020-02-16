#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <unordered_set>

bool is_symmetric(std::string const& origin)
{
    int end_pos = origin.size() - 1;
    for(int i = 0; i < origin.size() / 2; i++)
    {
        if (origin[i] != origin[end_pos - i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::unordered_set<std::string> data;
    data.reserve(n);

    for(int i = 0; i < n; i++)
    {
        std::string str;
        std::cin >> str;
        data.insert(str);
    }

    std::string result_begin;
    std::string result_end;

    std::unordered_set<std::string> symmetric;

    while(not data.empty())
    {
        std::string str = *data.begin();
        std::string copy(str);
        std::reverse(copy.begin(), copy.end());

        if(is_symmetric(str))
        {
            symmetric.insert(str);
            data.erase(str);
            continue;
        }

        if (data.find(copy) != data.end())
        {
            result_begin = result_begin + str;
            result_end = copy + result_end;
            data.erase(str);
            data.erase(copy);
            continue;
        }
        
        data.erase(str);
    }

    std::size_t extra_size = 0;
    if (not symmetric.empty())
    {
        extra_size = symmetric.begin()->size();
    }

    std::cout << (result_begin.size() + extra_size + result_end.size()) << std::endl;
    std::cout << result_begin;
    if (not symmetric.empty())
    {
        std::cout << *symmetric.begin();
    }
    std::cout << result_end << std::endl;

    return 0;
}
