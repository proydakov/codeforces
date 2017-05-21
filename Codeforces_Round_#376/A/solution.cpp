#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    char prev = 'a';
    int counter = 0;
    for(int i = 0; i < str.size(); i++) {
        char c = str[i];
        int swap1 = std::abs(c - prev);
        int swap2 = 26 - swap1;
        counter += std::min(swap1, swap2);
        prev = c;
    }
    std::cout << counter << std::endl;

    return 0;
}
