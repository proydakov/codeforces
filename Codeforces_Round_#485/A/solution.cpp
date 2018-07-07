#include <array>
#include <string>
#include <iostream>
#include <algorithm>

struct data_t
{
    std::string name;
    std::string color;
    bool found;
};

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<data_t, 6> glove
    {{
        { "Power", "purple", false },
        { "Time", "green", false },
        { "Space", "blue", false },
        { "Soul", "orange", false },
        { "Reality", "red", false },
        { "Mind", "yellow", false },
    }};

    std::size_t count;
    std::cin >> count;
    for(std::size_t i = 0; i < count; i++)
    {
        std::string color;
        std::cin >> color;
        auto it = std::find_if(glove.begin(), glove.end(), [color](auto& item){
            return item.color == color;
        });
        it->found = true;
    }

    std::cout << (glove.size() - count) << '\n';
    for(auto const& item : glove)
    {
        if(false == item.found)
        {
            std::cout << item.name << '\n';
        }
    }

    return 0;
}
