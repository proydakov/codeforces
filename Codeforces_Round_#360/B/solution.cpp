#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    for(auto it = str.begin(), end_it = str.end(); it != end_it; ++it) {
        std::cout << (*it);
    }

    for(auto it = str.rbegin(), end_it = str.rend(); it != end_it; ++it) {
        std::cout << (*it);
    }
    std::cout << std::endl;

    return 0;
}
