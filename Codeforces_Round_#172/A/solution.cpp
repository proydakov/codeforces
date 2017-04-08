#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    str[0] = std::toupper(str[0]);

    std::cout << str << std::endl;

    return 0;
}
