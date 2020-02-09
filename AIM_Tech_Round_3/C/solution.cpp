#include <string>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    bool started = false;
    int i = 0;
    std::size_t const last = str.size() - 1;
    for(; i < str.size(); i++)
    {
        const char symbol = str[i];
        if (symbol == 'a' and started)
        {
            break;
        }
        else if (symbol > 'a')
        {
            started = true;
        }

        if (started)
        {
            std::cout << (char)(symbol - 1);
        }
        else
        {
            if (i == last and !started)
            {
                break;
            }
            std::cout << symbol;
        }
    }

    if (started)
    {
        for(; i < str.size(); i++)
        {
            std::cout << str[i];
        }
    }
    else
    {
        std::cout << 'z';
    }

    std::cout << std::endl;

    return 0;
}
