#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string input;
    input.reserve(64);
    std::cin >> input;

    std::size_t const result = std::count_if(input.begin(), input.end(), [](char c){
        switch(c)
        {
            case '1':
            case '3':
            case '5':
            case '7':
            case '9':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
        }
        return false;
    });

    std::cout << result << std::endl;

    return 0;
}
