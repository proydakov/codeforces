#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    int l = std::count_if(str.begin(), str.end(), ::islower);
    int u = std::count_if(str.begin(), str.end(), ::isupper);

    if(u > l) {
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    std::cout << str << std::endl;

    return 0;
}
