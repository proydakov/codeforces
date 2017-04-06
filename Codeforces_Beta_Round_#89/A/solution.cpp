#include <array>
#include <sstream>
#include <iostream>
#include <algorithm>

void fill_vowel(std::array<int, 256>& vowel)
{
    vowel.fill(0);
    vowel['a'] = 1;
    vowel['o'] = 1;
    vowel['y'] = 1;
    vowel['e'] = 1;
    vowel['u'] = 1;
    vowel['i'] = 1;

    vowel['A'] = 1;
    vowel['O'] = 1;
    vowel['Y'] = 1;
    vowel['E'] = 1;
    vowel['U'] = 1;
    vowel['I'] = 1;
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    std::array<int, 256> vowel;
    fill_vowel(vowel);

    auto it = std::remove_if(str.begin(), str.end(), [&vowel](char c){
        return vowel[c];
    });

    str.erase(it, str.end());
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);

    std::stringstream sstream;
    for(const char c : str) {
        sstream << '.' << c;
    }

    std::cout << sstream.str() << std::endl;

    return 0;
}
