#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string table;
    std::cin >> table;

    std::vector<std::string> hand;
    hand.reserve(16);

    for (int i = 0; i < 5; i++)
    {
        std::string val;
        std::cin >> val;
        hand.push_back(val);
    }

    for(auto const& val : hand)
    {
        if (val.front() == table.front() || val.back() == table.back())
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;

    return 0;
}
