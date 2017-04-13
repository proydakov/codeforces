#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    char c;
    std::cin >> c;

    std::string str;
    std::cin >> str;

    const int offset = c == 'R' ? -1 : +1;

    std::string keyboard("qwertyuiopasdfghjkl;zxcvbnm,./");

    for(int i = 0; i < str.size(); i++) {
        size_t index = keyboard.find(str[i]);
        str[i] = keyboard[index + offset];
    }

    std::cout << str << std::endl;

    return 0;
}
