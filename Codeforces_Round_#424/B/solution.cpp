#include <array>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str1; std::string str2;
    std::cin >> str1;
    std::cin >> str2;

    std::array<char, 256> table;
    for(int i = 0; i < 256; i++) {
        table[i] = i;
    }

    for(int i = 0; i < str1.size(); i++) {
        table[str1[i]] = str2[i];
        table[toupper(str1[i])] = toupper(str2[i]);
    }

    std::string input;
    std::cin >> input;
    for(const char c : input) {
        std::cout << table[c];
    }
    std::cout << std::endl;

    return 0;
}
