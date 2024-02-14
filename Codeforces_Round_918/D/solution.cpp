#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    size_t size;
    std::cin >> size;

    std::string input;
    std::cin >> input;

    bool first{};
    std::string res;

    auto flush = [&res, &first](){
        if (first)
        {
            std::cout << '.';
        }
        first = true;
        std::cout << res;
        res = "";
    };

    for(size_t i = 0; i < input.size(); i++)
    {
        res.push_back(input[i]);
        if (res.size() == 2)
        {
            size_t next2 = i + 2;
            if (next2 < input.size())
            {
                if(input[next2] == 'a' || input[next2] == 'e')
                {
                    flush();
                }
                else
                {
                    res.push_back(input[i + 1]);
                    i++;
                    flush();
                }
            }
        }
    }
    flush();
    std::cout << std::endl;
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
