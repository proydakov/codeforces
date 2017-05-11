#include <cmath>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string s1; std::string s2;
    std::cin >> s1;
    std::cin >> s2;

    if(s1 == s2) {
        std::cout << -1 << std::endl;
    }
    else {
        std::cout << std::max(s1.size(), s2.size()) << std::endl;
    }

    return 0;
}
