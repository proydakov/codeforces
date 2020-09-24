#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string line;
    std::cin >> line;

    std::vector<std::string> vec;
    vec.reserve(line.size());
    std::string temp;

    for(auto const c : line)
    {
        if(c == '0')
        {
            if (not temp.empty())
            {
                vec.push_back(std::move(temp));
                temp = std::string();
            }
        }
        else
        {
            temp.push_back('1');
        }
    }

    if (not temp.empty())
    {
        vec.push_back(std::move(temp));
    }

    std::sort(vec.begin(), vec.end(), [](auto const& e1, auto const e2){
        return e1.size() < e2.size();
    });

    size_t counter = 0;

    for(size_t i = 0, size = vec.size(); i < size; i++)
    {
        if (i % 2 == 0)
        {
            counter += vec.back().size();
        }

        vec.pop_back();
    }

    std::cout << counter << "\n";
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
