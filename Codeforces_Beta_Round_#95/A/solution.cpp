#include <array>
#include <string>
#include <iostream>
#include <algorithm>

void fill_invert(std::array<int, 256>& invert)
{
    for(int i = 'A'; i <= 'Z'; i++) {
        invert[i] = i - 'A' + 'a';
    }
    for(int i = 'a'; i <= 'z'; i++) {
        invert[i] = i - 'a' + 'A';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    bool change = true;
    if( !std::all_of( str.begin() + 1, str.end(), isupper ) ) {
        change = false;
    }

    if(change) {
        std::array<int, 256> invert;
        invert.fill(0);
        fill_invert(invert);
        for(int i = 0; i < str.size(); i++) {
            str[i] = invert[str[i]];
        }
    }
    std::cout << str << std::endl;

    return 0;
}
