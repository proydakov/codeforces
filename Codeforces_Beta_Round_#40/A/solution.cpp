#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string origin_str;
    std::cin >> origin_str;

    std::string test_str;
    std::cin >> test_str;

    const bool eq = std::equal(origin_str.begin(), origin_str.end(), test_str.rbegin());
    if(eq) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
